#!/bin/bash

# Are there 2 arguments?
if [ "$#" -ne 2 ]; then
  echo "Use: $0 <nombre_carpeta> <nombre_archivo>"
  exit 1
fi

FOLDER_NAME="$1"
SCRIPT_NAME="$2"

# Replace special characters in the script name
SCRIPT_NAME_SAFE=$(echo "$SCRIPT_NAME" | sed 's/[<>:"\/\\|?*]/_/g')

# Create folder if it doesn't exist
mkdir -p "$FOLDER_NAME"

# Copy script template into new script
cat template.txt >> "${FOLDER_NAME}/${SCRIPT_NAME_SAFE}.cpp"

# Open new script
code "${FOLDER_NAME}/${SCRIPT_NAME_SAFE}.cpp"
