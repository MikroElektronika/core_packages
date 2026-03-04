from __future__ import annotations

import os, re, time, json, requests
from dataclasses import dataclass
from typing import Any, Dict, Optional, Tuple

from pathlib import PurePath

## Special files, i.e. non vendor specific
SPECIAL_RELEASE_FILENAMES = {
    "clocks.json",
    "database.7z",
    "database_dev.7z",
    "database_experimental.7z",
    "docs.7z",
    "erp_db.db",
    "images.7z",
    "metadata.json",
    "mikroe_utils_common.7z",
    "necto_db.db",
    "necto_db_dev.db",
    "preinit.7z",
    "schemas.json",
    "unit_test_lib.7z",
}

def increase_version(version, part="patch"):
    # Split the version string into major, minor, and patch
    major, minor, patch = map(int, version.split('.'))

    # Increase the selected part
    if part == "major":
        major += 1
        minor = 0  # Reset minor and patch when major increases
        patch = 0
    elif part == "minor":
        minor += 1
        patch = 0  # Reset patch when minor increases
    elif part == "patch":
        patch += 1

    # Return the new version string
    return f"{major}.{minor}.{patch}"

def append_to_payload(payload, new_object_name, new_object_path):
    payload["files"][new_object_name] = {
        "vendor": "CORE",
        "path": new_object_path,
        "compiler": "CORE"
    }

def resolve_mcu_vendor(cmake_path):
    vendor = cmake_path.split(os.sep)[-2].upper()
    return vendor

@dataclass(frozen=True)
class FileSpec:
    filename: str
    vendor: str
    path: str
    compiler: Optional[str] = None


class GitHubReleaseUploader:
    """
    Rules:
      - SPECIAL_RELEASE_FILENAMES -> "Release {version}"
      - else:
          - GCC/Clang -> "{vendor} MCU Support packages for GCC & Clang {version}"
          - otherwise -> "MCU Support packages for {compiler} {version}"

    Guarantees:
      - If the release with the computed *name* doesn't exist, it is created before upload continues.
    """

    def __init__(
        self,
        repo: str,  # "owner/name"
        token: str,
        *,
        api_base: str = "https://api.github.com",
        timeout_s: int = 120,
        max_retries: int = 5,
        retry_backoff_s: float = 1.5,
        dry_run: bool = False,
        tag_name: str
    ) -> None:
        self.repo = repo
        self.api_base = api_base.rstrip("/")
        self.timeout_s = timeout_s
        self.max_retries = max_retries
        self.retry_backoff_s = retry_backoff_s
        self.dry_run = dry_run
        self.tag_name = tag_name

        self.session = requests.Session()
        self.session.headers.update(
            {
                "Authorization": f"token {token}",
                "Accept": "application/vnd.github+json",
                "User-Agent": "release-uploader/1.1",
            }
        )

        # Cache: release_name -> (release_id, upload_url_without_template)
        self._release_cache: Dict[str, Tuple[int, str]] = {}

    # ---------------------------
    # Public API
    # ---------------------------

    def build_release_payload_from_packages(self, packages, output_root):
        """
        packages: list of dicts (your old JSON)
        output_root: e.g. "/home/strahinja/git/core_packages/output"
        """

        def norm_slashes(p: str) -> str:
            return (p or "").replace("\\", "/")

        def pick_arch_and_compiler_folder(pkg) -> tuple[str, str]:
            # install_location example:
            # %APPLICATION_DATA_DIR%/packages\core\ARM\gcc_clang\arm_gcc_clang_gd32a
            loc = norm_slashes(pkg.get("install_location", ""))
            parts = [x for x in loc.split("/") if x]

            # Expect ".../core/<ARCH>/<compiler_folder>/<name>"
            try:
                core_i = next(i for i, x in enumerate(parts) if x.lower() == "core")
                arch = parts[core_i + 1]
                compiler_folder = parts[core_i + 2]
                return arch, compiler_folder
            except Exception:
                # fallback: infer from name like "arm_gcc_clang_xxx"
                name = pkg.get("name", "")
                prefix = name.split("_", 2)
                arch_guess = prefix[0].upper() if prefix else ""
                compiler_folder_guess = prefix[1].lower() if len(prefix) > 1 else ""
                return arch_guess, compiler_folder_guess

        def compiler_label_from_folder(folder: str) -> str:
            f = (folder or "").lower()
            if f == "gcc_clang":
                return "GCC_CLANG"
            if f == "mikroc":
                return "mikroC"
            if f in ("xc8", "xc16", "xc32"):
                return 'XC'
            return folder  # last-resort passthrough

        files = {}
        for pkg in packages:
            name = pkg["name"]
            archive = f"{name}.7z"

            arch, compiler_folder = pick_arch_and_compiler_folder(pkg)
            compiler = compiler_label_from_folder(compiler_folder)

            files[archive] = {
                "vendor": pkg.get("vendor", ""),
                "path": f"{output_root}/{arch}/{compiler_folder}/{archive}",
                "compiler": compiler,
            }

        return {"version": self.tag_name, "tag": self.tag_name, "files": files}

    def upload_from_json(self, payload: Dict[str, Any], metadata, releases_to_update) -> None:
        version = str(payload.get("version") or "").strip()
        if not version:
            raise ValueError("JSON payload must contain non-empty 'version'.")

        tag = str(payload.get("tag") or version).strip()
        if not tag:
            raise ValueError("Could not determine tag (from 'tag' or 'version').")

        files_obj = payload.get("files")
        if not isinstance(files_obj, dict) or not files_obj:
            raise ValueError("JSON payload must contain a non-empty 'files' object mapping filename -> spec.")

        specs = self._parse_files(files_obj)

        releases_info = {}

        log_array = []
        for spec in specs:
            release_version, release_name = self._select_release_name(version=version, spec=spec, releases_to_update=releases_to_update.split('|'))
            if release_name.startswith(spec.vendor):
                tag = f'{spec.vendor}_{spec.compiler}_{release_version}'
            elif release_name.startswith('Release'):
                general_release_name = release_name
                tag = release_version
            else:
                tag = f'{spec.compiler}_{release_version}'

            # Group assets by releases
            if release_name not in releases_info:
                releases_info[release_name] = {
                    'assets': [],
                    'tag': tag,
                    'upload_url': '',
                    'release_id': ''
                }
            releases_info[release_name]['assets'].append(
                {
                    'asset_name': spec.filename,
                    'path': spec.path
                })

        # Create releases if they are not already present
        for release_name in releases_info:
            print(f'Fetching existing Release information for {release_name}...')
            rel_id, upload_url = self._ensure_release_cached(name=release_name, tag=releases_info[release_name]['tag'])
            releases_info[release_name]['upload_url'] = upload_url
            releases_info[release_name]['release_id'] = rel_id

        # Upload assets to corresponding release if they are not already there
        for release_name in releases_info:
            # Release with general files will be processed in the end
            # as it require different approach with removing assets
            if release_name == general_release_name:
                continue
            print(f'Processing packages for {release_name}.')
            existing_assets = self._get_all_release_assets(releases_info[release_name]['release_id'])
            existing_asset_names = [asset['name'] for asset in existing_assets]
            for asset in releases_info[release_name]['assets']:
                # Map appropriate release name with the asset in metadata for proper indexing afterwards
                for metadata_asset in metadata:
                    if metadata_asset['name'] == asset['asset_name'].replace('.7z', ''):
                        metadata_asset['release_tag'] = releases_info[release_name]['tag']
                        break
                if asset['asset_name'] not in existing_asset_names:
                    if self.dry_run:
                        msg = f"[DRY RUN] Would upload {asset['asset_name']} to \"{release_name}\""
                        log_array.append(msg)
                        print(msg)
                    else:
                        self._upload_asset(
                            upload_url = releases_info[release_name]['upload_url'],
                            asset_name = asset['asset_name'],
                            file_path = asset['path'])
                else:
                    print(f"\033[34mAsset already exists in release -> skipping: {asset['asset_name']}\033[0m")

        # Update metadata file with release name info
        with open('metadata.json', 'w') as f:
            json.dump(metadata, f, indent=4)

        # Finally, handle general release
        print(f'Processing packages for {general_release_name}.')
        existing_assets = self._get_all_release_assets(releases_info[general_release_name]['release_id'])
        existing_asset_names = [asset['name'] for asset in existing_assets]
        for asset in releases_info[general_release_name]['assets']:
            # Always upload/reupload assets for general release
            if self.dry_run:
                msg = f"[DRY RUN] Would upload {asset['asset_name']} to \"{general_release_name}\""
                log_array.append(msg)
                print(msg)
            if asset['asset_name'] in existing_asset_names:
                print(f"\033[33mAsset already exists in release -> deleting: {asset['asset_name']}\033[0m")
                self._delete_asset_by_name_for_upload_url(
                    upload_url = releases_info[general_release_name]['upload_url'],
                    asset_name = asset['asset_name'],
                )

            self._upload_asset(
                upload_url = releases_info[general_release_name]['upload_url'],
                asset_name = asset['asset_name'],
                file_path = asset['path'])

        if self.dry_run:
            with open('dry_run_log.txt', 'w') as file:
                file.write("\n".join(log_array))

    # ---------------------------
    # JSON parsing / rules
    # ---------------------------
    def _parse_files(self, files_obj: Dict[str, Any]) -> list[FileSpec]:
        out: list[FileSpec] = []
        for filename, meta in files_obj.items():
            if not isinstance(filename, str) or not filename.strip():
                raise ValueError(f"Invalid filename key in files mapping: {filename!r}")
            if not isinstance(meta, dict):
                raise ValueError(f"File entry for {filename!r} must be an object, got {type(meta).__name__}")

            vendor = str(meta.get("vendor") or "").strip()
            path = str(meta.get("path") or "").strip()
            compiler = meta.get("compiler")
            compiler_str = str(compiler).strip() if compiler is not None else None

            if not vendor:
                raise ValueError(f"Missing/empty 'vendor' for file {filename!r}")
            if not path:
                raise ValueError(f"Missing/empty 'path' for file {filename!r}")
            if not os.path.isfile(path):
                raise FileNotFoundError(f"Path does not exist or is not a file for {filename!r}: {path}")

            out.append(FileSpec(filename=filename, vendor=vendor, path=path, compiler=compiler_str))
        return out

    def _select_release_name(self, *, version: str, spec: FileSpec, releases_to_update: list) -> str:
        if spec.filename in SPECIAL_RELEASE_FILENAMES:
            return version, f"Release {version}"

        compiler = (spec.compiler or "").strip()
        if not compiler:
            compiler = self._infer_compiler_from_filename(spec.filename) or 'UNKNOWN'

        if self._is_gcc_or_clang(compiler, spec.filename):
            release_name = f'{spec.vendor} MCU Support packages for GCC & Clang'
        else:
            release_name = f'MCU Support packages for {compiler}'

        # If this release is requested to be updated - increase the version
        if release_name in releases_to_update:
            version = 'v' + increase_version(version.replace('v', ''), part='patch')

        return version, f"{release_name} {version}"

    def _infer_compiler_from_filename(self, filename: str) -> Optional[str]:
        s = filename.lower()
        if "clang" in s:
            return "Clang"
        if re.search(r"\bgcc\b", s) or "gnu" in s or "armgcc" in s:
            return "GCC"
        if "mikroc" in s:
            return "mikroC"
        if "xc16" in s:
            return "XC16"
        if "iar" in s:
            return "IAR"
        if "keil" in s or "armcc" in s:
            return "Keil"
        return None

    def _is_gcc_or_clang(self, compiler: str, filename: str) -> bool:
        c = compiler.strip().lower()
        f = filename.lower()
        return ("gcc" in c) or ("clang" in c) or ("gcc" in f) or ("clang" in f)

    # ---------------------------
    # Release ensure + caching
    # ---------------------------
    def _ensure_release_cached(self, *, name: str, tag: str) -> Tuple[int, str]:
        cached = self._release_cache.get(name)
        if cached:
            return cached

        rel_id, upload_url = self._ensure_release(name=name, tag=tag)
        self._release_cache[name] = (rel_id, upload_url)
        return rel_id, upload_url

    def _ensure_release(self, *, name: str, tag: str) -> Tuple[int, str]:
        """
        Ensure a release exists with exact matching name. If missing, create it.
        Returns: (release_id, upload_url_without_template)
        """
        existing = self._find_release_by_name(name)
        if existing:
            rel_id = int(existing["id"])
            upload_url = str(existing["upload_url"]).split("{")[0]
            return rel_id, upload_url

        if self.dry_run:
            print(f"[DRY RUN] Would create release: name={name!r}, tag={tag!r}")
            return 0, "https://uploads.github.com/fake"

        url = f"{self.api_base}/repos/{self.repo}/releases"
        body = {
            "tag_name": tag,
            "name": name,
            "draft": False,
            "prerelease": False,
            "generate_release_notes": False,
            "make_latest": "false",
        }
        resp = self._request("POST", url, json=body)
        rel = resp.json()
        rel_id = int(rel["id"])
        upload_url = str(rel["upload_url"]).split("{")[0]
        print(f"\033[34mCreated release: {name} (id={rel_id})\033[0m")
        return rel_id, upload_url

    def _find_release_by_name(self, name: str) -> Optional[Dict[str, Any]]:
        url = f"{self.api_base}/repos/{self.repo}/releases"
        page = 1
        per_page = 100

        while True:
            resp = self._request("GET", url, params={"per_page": per_page, "page": page})
            releases = resp.json()
            if not releases:
                return None

            for r in releases:
                if str(r.get("name") or "") == name:
                    return r

            if len(releases) < per_page:
                return None
            page += 1

    def _get_all_release_assets(self, release_id: int):
        all_assets = []
        url = f"https://api.github.com/repos/{self.repo}/releases/{release_id}/assets"
        page = 1
        per_page = 100

        while True:
            resp = requests.get(
                url,
                headers=self.session.headers,          # or just self.headers
                params={"per_page": per_page, "page": page},
                timeout=30,
            )
            resp.raise_for_status()
            assets = resp.json()

            if not assets:
                break

            all_assets.extend(assets)

            if len(assets) < per_page:
                break

            page += 1

        return all_assets

    # ---------------------------
    # Upload asset
    # ---------------------------
    def _upload_asset(self, *, upload_url: str, asset_name: str, file_path: str) -> None:
        size = os.path.getsize(file_path)

        with open(file_path, "rb") as f:
            params = {"name": asset_name}
            headers = {"Content-Type": "application/octet-stream"}

            self._request(
                "POST",
                upload_url,
                params=params,
                headers=headers,
                data=f,
            )

        print(f"\033[32mUploaded: {asset_name} ({size} bytes)\033[0m")

    def _delete_asset_by_name_for_upload_url(self, *, upload_url: str, asset_name: str) -> bool:
        """
        Finds the release whose upload_url matches, lists its assets, deletes the one with asset_name.
        Returns True if deleted, False otherwise.
        """
        releases_url = f"{self.api_base}/repos/{self.repo}/releases"
        resp = self._request("GET", releases_url, params={"per_page": 100, "page": 1})
        releases = resp.json()

        normalized = upload_url.rstrip("/")
        target_release = None
        for r in releases:
            u = str(r.get("upload_url", "")).split("{")[0].rstrip("/")
            if u == normalized:
                target_release = r
                break

        if not target_release:
            print(f"\033[33mWarning: Could not locate release for upload_url; cannot replace {asset_name}\033[0m")
            return False

        rel_id = int(target_release["id"])
        assets_url = f"{self.api_base}/repos/{self.repo}/releases/{rel_id}/assets"
        assets = self._request("GET", assets_url).json()

        for a in assets:
            if str(a.get("name") or "") == asset_name:
                del_url = f"{self.api_base}/repos/{self.repo}/releases/assets/{int(a['id'])}"
                self._request("DELETE", del_url)
                print(f"\033[31mDeleted existing asset: {asset_name}\033[0m")
                return True

        return False

    # ---------------------------
    # Request wrapper with retries
    # ---------------------------

    def _request(self, method: str, url: str, **kwargs) -> requests.Response:
        last_exc: Optional[Exception] = None

        for attempt in range(1, self.max_retries + 1):
            try:
                resp = self.session.request(method, url, timeout=self.timeout_s, **kwargs)

                if resp.status_code in (500, 502, 503, 504, 429):
                    raise requests.HTTPError(f"Transient error {resp.status_code}", response=resp)

                if resp.status_code == 403:
                    ra = resp.headers.get("Retry-After")
                    if ra:
                        time.sleep(float(ra))
                        continue

                resp.raise_for_status()
                return resp

            except (requests.Timeout, requests.ConnectionError, requests.HTTPError) as e:
                last_exc = e
                if attempt < self.max_retries:
                    time.sleep(self.retry_backoff_s * (attempt ** 1.2))
                    continue
                break

        assert last_exc is not None
        raise last_exc

