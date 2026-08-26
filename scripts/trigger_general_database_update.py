#!/usr/bin/env python3
"""Dispatch a typed database update to general_packages and optionally wait."""

from __future__ import annotations

import argparse
import json
import os
import time
import urllib.error
import urllib.parse
import urllib.request
import uuid

from database_assets import normalize_channel


TARGET_REPO = "MikroElektronika/general_packages"
WORKFLOW_FILE = "database-external-update.yml"
EVENT_TYPE = "database-update"


def api_request(token: str, url: str, *, method: str = "GET", body=None):
    data = None if body is None else json.dumps(body).encode("utf-8")
    request = urllib.request.Request(url, data=data, method=method)
    request.add_header("Accept", "application/vnd.github+json")
    request.add_header("Authorization", f"Bearer {token}")
    request.add_header("X-GitHub-Api-Version", "2022-11-28")
    if data is not None:
        request.add_header("Content-Type", "application/json")
    try:
        with urllib.request.urlopen(request) as response:
            payload = response.read()
            return json.loads(payload) if payload else None
    except urllib.error.HTTPError as exc:
        details = exc.read().decode("utf-8", errors="replace")
        raise RuntimeError(f"GitHub API {method} {url} failed: {exc.code}: {details}") from exc


def wait_for_run(token: str, request_id: str, timeout_minutes: int) -> None:
    runs_url = (
        f"https://api.github.com/repos/{TARGET_REPO}/actions/workflows/"
        f"{WORKFLOW_FILE}/runs?event=repository_dispatch&per_page=50"
    )
    expected_title = f"Database update: {request_id}"
    deadline = time.monotonic() + timeout_minutes * 60
    run = None

    while time.monotonic() < deadline:
        response = api_request(token, runs_url)
        run = next(
            (
                item
                for item in response.get("workflow_runs", [])
                if item.get("display_title") == expected_title
            ),
            None,
        )
        if run:
            break
        print("Waiting for the general_packages workflow run to appear...")
        time.sleep(10)

    if not run:
        raise TimeoutError(f"Could not find workflow run {expected_title!r}")

    run_url = run["url"]
    html_url = run["html_url"]
    print(f"Database workflow: {html_url}")
    while time.monotonic() < deadline:
        run = api_request(token, run_url)
        status = run.get("status")
        conclusion = run.get("conclusion")
        print(f"general_packages status={status}, conclusion={conclusion}")
        if status == "completed":
            if conclusion != "success":
                raise RuntimeError(
                    f"general_packages database update finished with {conclusion}: {html_url}"
                )
            return
        time.sleep(15)
    raise TimeoutError(f"Timed out waiting for {html_url}")


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--token", default=os.environ.get("GENERAL_PACKAGES_TOKEN"))
    parser.add_argument("--channel", required=True)
    parser.add_argument("--operation", choices=("refresh", "sdk", "devices"), required=True)
    parser.add_argument("--source-repo", default=os.environ.get("GITHUB_REPOSITORY", ""))
    parser.add_argument("--source-ref", default=os.environ.get("GITHUB_SHA", ""))
    parser.add_argument("--core-release", default="latest")
    parser.add_argument("--core-version", default="latest")
    parser.add_argument("--sdk-version", default="latest")
    parser.add_argument("--mcus-only", choices=("true", "false"), default="false")
    parser.add_argument("--skip-mchp-packs", choices=("true", "false"), default="false")
    parser.add_argument("--device-action", choices=("set-sdk-support", "remove-devices"))
    parser.add_argument("--regex")
    parser.add_argument("--delete-device", choices=("true", "false"), default="false")
    parser.add_argument("--xc8-specific", choices=("true", "false"), default="false")
    parser.add_argument("--ai-sdk", choices=("true", "false"), default="false")
    parser.add_argument("--spreadsheet-regex", choices=("true", "false"), default="false")
    parser.add_argument("--wait", action="store_true")
    parser.add_argument("--timeout-minutes", type=int, default=240)
    args = parser.parse_args()

    if not args.token:
        parser.error("--token or GENERAL_PACKAGES_TOKEN is required")
    channel = normalize_channel(args.channel)
    if args.operation == "devices" and not args.device_action:
        parser.error("--device-action is required for operation=devices")
    if args.operation == "devices" and not args.regex and args.spreadsheet_regex != "true":
        parser.error("--regex is required unless --spreadsheet-regex=true")

    request_id = uuid.uuid4().hex
    payload = {
        "request_id": request_id,
        "source_repo": args.source_repo,
        "source_ref": args.source_ref,
        "channel": channel,
        "operation": args.operation,
        "core_release": args.core_release,
        "core_version": args.core_version,
        "sdk_version": args.sdk_version,
        "mcus_only": args.mcus_only == "true",
        "skip_mchp_packs": args.skip_mchp_packs == "true",
        "device_action": args.device_action,
        "regex": args.regex,
        "delete_device": args.delete_device == "true",
        "xc8_specific": args.xc8_specific == "true",
        "ai_sdk": args.ai_sdk == "true",
        "spreadsheet_regex": args.spreadsheet_regex == "true",
    }

    api_request(
        args.token,
        f"https://api.github.com/repos/{TARGET_REPO}/dispatches",
        method="POST",
        body={"event_type": EVENT_TYPE, "client_payload": payload},
    )
    print(f"Dispatched general_packages database update {request_id} ({channel}/{args.operation})")
    if args.wait:
        wait_for_run(args.token, request_id, args.timeout_minutes)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
