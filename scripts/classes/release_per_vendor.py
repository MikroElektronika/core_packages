from __future__ import annotations

import os
import re
import time
from dataclasses import dataclass
from typing import Any, Dict, Optional, Tuple

import requests

## Special files, i.e. non vendor specific
SPECIAL_RELEASE_FILENAMES = {
    "clocks.json",
    "database.7z",
    "database_dev.7z",
    "database_experimental.7z",
    "docs.7z",
    "dspic_xc16_dspic.7z",
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
    ) -> None:
        self.repo = repo
        self.api_base = api_base.rstrip("/")
        self.timeout_s = timeout_s
        self.max_retries = max_retries
        self.retry_backoff_s = retry_backoff_s
        self.dry_run = dry_run

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

    def upload_from_json(self, payload: Dict[str, Any]) -> None:
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

        for spec in specs:
            release_name = self._select_release_name(version=version, spec=spec)
            if release_name.startswith(spec.vendor):
                tag = f'{spec.vendor}_{spec.compiler}_{version}'
            else:
                tag = f'{spec.compiler}_{version}'
            rel_id, upload_url = self._ensure_release_cached(name=release_name, tag=tag)
            self._upload_asset(upload_url=upload_url, asset_name=spec.filename, file_path=spec.path)

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

    def _select_release_name(self, *, version: str, spec: FileSpec) -> str:
        if spec.filename in SPECIAL_RELEASE_FILENAMES:
            return f"Release {version}"

        compiler = (spec.compiler or "").strip()
        if not compiler:
            compiler = self._infer_compiler_from_filename(spec.filename) or "UNKNOWN"

        if self._is_gcc_or_clang(compiler, spec.filename):
            return f"{spec.vendor} MCU Support packages for GCC & Clang {version}"

        return f"MCU Support packages for {compiler} {version}"

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
        }
        resp = self._request("POST", url, json=body)
        rel = resp.json()
        rel_id = int(rel["id"])
        upload_url = str(rel["upload_url"]).split("{")[0]
        print(f"Created release: {name} (id={rel_id})")
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

    def _asset_exists_in_release(self, *, upload_url: str, asset_name: str) -> bool:
        """
        Returns True if asset with given name already exists in the release.
        """

        # Find the release that matches this upload_url
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
            print(f"Warning: Could not resolve release for upload_url.")
            return False

        rel_id = int(target_release["id"])
        assets_url = f"{self.api_base}/repos/{self.repo}/releases/{rel_id}/assets"

        assets_resp = self._request("GET", assets_url)
        assets = assets_resp.json()

        for asset in assets:
            if str(asset.get("name") or "") == asset_name:
                return True

        return False

    # ---------------------------
    # Upload asset (replace if exists)
    # ---------------------------

    def _upload_asset(self, *, upload_url: str, asset_name: str, file_path: str) -> None:
        """
        Upload asset only if it does NOT already exist in the release.
        If it exists -> print and skip.
        """

        size = os.path.getsize(file_path)

        if self.dry_run:
            print(f"[DRY RUN] Would upload {asset_name} ({size} bytes)")
            return

        # First check if asset already exists
        if self._asset_exists_in_release(upload_url=upload_url, asset_name=asset_name):
            print(f"Asset already exists in release → skipping: {asset_name}")
            return

        # Upload if not present
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

        print(f"Uploaded: {asset_name} ({size} bytes)")

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
            print(f"Warning: could not locate release for upload_url; cannot replace {asset_name}")
            return False

        rel_id = int(target_release["id"])
        assets_url = f"{self.api_base}/repos/{self.repo}/releases/{rel_id}/assets"
        assets = self._request("GET", assets_url).json()

        for a in assets:
            if str(a.get("name") or "") == asset_name:
                del_url = f"{self.api_base}/repos/{self.repo}/releases/assets/{int(a['id'])}"
                self._request("DELETE", del_url)
                print(f"Deleted existing asset: {asset_name}")
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


# ---------------------------
# Example usage
# ---------------------------
# if __name__ == "__main__":
#     with open("upload_map.json", "r", encoding="utf-8") as f:
#         payload = json.load(f)
#     uploader = GitHubReleaseUploader(
#         repo="YOUR_ORG/YOUR_REPO",
#         token=os.environ["GITHUB_TOKEN"],
#         dry_run=False,
#     )
#     uploader.upload_from_json(payload)
