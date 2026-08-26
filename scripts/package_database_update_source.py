#!/usr/bin/env python3
"""Build the source bundle consumed by general_packages database updates."""

from __future__ import annotations

import argparse
import json
import shutil
import subprocess
import tempfile
from datetime import datetime, timezone
from pathlib import Path


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--repo-root", type=Path, default=Path("."))
    parser.add_argument("--output", type=Path, default=Path("database_update_source.7z"))
    parser.add_argument("--source-ref", default="")
    args = parser.parse_args()

    repo_root = args.repo_root.resolve()
    queries = repo_root / "resources" / "queries"
    if not queries.is_dir():
        raise FileNotFoundError(f"Missing Core query source: {queries}")

    output = args.output.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    if output.exists():
        output.unlink()

    with tempfile.TemporaryDirectory(prefix="database-update-source-") as tmp:
        staging = Path(tmp)
        shutil.copytree(queries, staging / "resources" / "queries")
        manifest = {
            "format": 1,
            "source_repository": "MikroElektronika/core_packages",
            "source_ref": args.source_ref,
            "created_at": datetime.now(timezone.utc).isoformat(),
            "queries_path": "resources/queries",
        }
        (staging / "manifest.json").write_text(
            json.dumps(manifest, indent=2) + "\n", encoding="utf-8"
        )
        subprocess.run(
            ["7z", "a", "-t7z", "-mx=5", "-mtc=off", str(output), "."],
            cwd=staging,
            check=True,
        )

    print(output)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
