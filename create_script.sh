#!/bin/bash

# are there 2 arguments?
if [ "$#" -ne 2 ]; then
  echo "Use: $0 <nombre_carpeta> <nombre_archivo>"
  exit 1
fi

FOLDER_NAME="$1"
SCRIPT_NAME="$2"

# create folder if it doesn't exist
mkdir -p "$FOLDER_NAME"

# copy script template into new script
cat template.txt >> "${FOLDER_NAME}/${SCRIPT_NAME}.cpp"

# open new script
code "${FOLDER_NAME}/${SCRIPT_NAME}.cpp"
