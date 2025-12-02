#!/bin/bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
MARK_PATH="$SCRIPT_DIR/last_script_path.txt"

if [ ! -f "$MARK_PATH" ]; then
    echo "Last script path not found at: $MARK_PATH"
    exit 1
fi

# NO USAR "PATH" — usamos FILE_PATH en su lugar
FILE_PATH=$(cat "$MARK_PATH")

g++ "$FILE_PATH" -o exe
./exe
