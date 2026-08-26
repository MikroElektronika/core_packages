#!/usr/bin/env python3
"""Download one canonical NECTO database channel from general_packages."""

from __future__ import annotations

import argparse
import os
import shutil
import subprocess
import tempfile
import urllib.request
from pathlib import Path


RELEASE_ROOT = (
    "https://github.com/MikroElektronika/general_packages/releases/download/"
    "general_packages_assets"
)

ARCHIVES = {
    "live": "database_live.7z",
    "development": "database_dev.7z",
    "experimental": "database_experimental.7z",
}

ALIASES = {
    "live": "live",
    "release": "live",
    "official": "live",
    "development": "development",
    "dev": "development",
    "test": "development",
    "experimental": "experimental",
    "exp": "experimental",
}

LEGACY_OUTPUTS = {
    "live": Path("necto_db.db"),
    "development": Path("necto_db_dev.db"),
    "experimental": Path("necto_db_experimental.db"),
}


def normalize_channel(value: str) -> str:
    try:
        return ALIASES[value.strip().lower()]
    except (AttributeError, KeyError) as exc:
        raise ValueError(
            f"Unsupported database channel {value!r}; use live, development, or experimental"
        ) from exc


def database_url(channel: str) -> str:
    normalized = normalize_channel(channel)
    return f"{RELEASE_ROOT}/{ARCHIVES[normalized]}"


def download_database(
    channel: str,
    destination: os.PathLike[str] | str | None = None,
    *,
    token: str | None = None,
) -> Path:
    normalized = normalize_channel(channel)
    output = Path(destination or LEGACY_OUTPUTS[normalized]).resolve()
    output.parent.mkdir(parents=True, exist_ok=True)

    with tempfile.TemporaryDirectory(prefix=f"necto-db-{normalized}-") as tmp:
        tmp_root = Path(tmp)
        archive = tmp_root / ARCHIVES[normalized]
        extracted = tmp_root / "extracted"
        extracted.mkdir()

        request = urllib.request.Request(database_url(normalized))
        if token:
            request.add_header("Authorization", f"Bearer {token}")
        request.add_header("Accept", "application/octet-stream")

        print(f"Downloading {normalized} database from {request.full_url}")
        with urllib.request.urlopen(request) as response, archive.open("wb") as target:
            shutil.copyfileobj(response, target)

        subprocess.run(
            ["7z", "x", "-y", f"-o{extracted}", str(archive)],
            check=True,
        )

        candidates = list(extracted.rglob("necto_db.db"))
        if len(candidates) != 1:
            raise RuntimeError(
                f"Expected exactly one necto_db.db in {ARCHIVES[normalized]}, "
                f"found {len(candidates)}"
            )
        shutil.copy2(candidates[0], output)

    print(f"Database ready: {output}")
    return output


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("channel", help="live, development/dev/test, or experimental")
    parser.add_argument("--output", type=Path)
    parser.add_argument("--token", default=os.environ.get("GITHUB_TOKEN"))
    args = parser.parse_args()
    download_database(args.channel, args.output, token=args.token)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
