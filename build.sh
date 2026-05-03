#!/usr/bin/env bash
# build.sh — Regenerate IDA type library (.til) files from IDA.h
#
# Usage:
#   ./build.sh                  # uses 'tilib' from PATH
#   TILIB=/path/to/tilib ./build.sh
#   ./build.sh /path/to/tilib   # first argument overrides path
#
# tilib is shipped with IDA Pro (SDK or standalone tilib package).

set -euo pipefail

TILIB="${1:-${TILIB:-tilib}}"

# For a bare name (no slash), look it up in PATH; for a full/relative path, test directly.
if [[ "$TILIB" != */* ]]; then
    if ! command -v "$TILIB" &>/dev/null; then
        echo "error: tilib not found in PATH ('${TILIB}')" >&2
        echo "  Set the TILIB environment variable or pass the path as the first argument." >&2
        exit 1
    fi
elif [ ! -x "$TILIB" ]; then
    echo "error: tilib not found at '${TILIB}'" >&2
    echo "  Set the TILIB environment variable or pass the path as the first argument." >&2
    exit 1
fi

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

echo "Using tilib: $("$TILIB" -v 2>&1 | head -1 || echo "$TILIB")"
echo ""

echo "Building IDA.til (64-bit)..."
"$TILIB" -c -hIDA.h IDA.til -D__EA64__ -P -tIDAObjcTypes

echo "Building IDA32.til (32-bit)..."
"$TILIB" -c -hIDA.h IDA32.til -P -tIDAObjcTypes32

echo ""
echo "Done. Generated IDA.til and IDA32.til"
