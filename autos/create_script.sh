#!/usr/bin/env bash
set -euo pipefail

############################################
# Resolve absolute paths
############################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TEMPLATE_DIR="${SCRIPT_DIR}/../templates"
SOLUTIONS_DIR="${SCRIPT_DIR}/../solutions"

############################################
# Default Arguments
############################################

FOLDER_ARG=""
SCRIPT_ARG=""
LINK_ARG="{{ URL }}"
MULTI_ARG=true
YESNO_ARG=false
FASTIO_ARG=true
MARK_AS_LAST_ARG=true

############################################
# Helper: console color logger
############################################

ok()   { echo -e "\e[32m[SUC]\e[0m   $*"; }
err()  { echo -e "\e[31m[ERR]\e[0m  $*" >&2; }

############################################
# Usage
############################################

usage() {
  cat <<EOF
Usage:
  $0 [folder] [script] [-f folder] [-s script] [--single] [--yesno] [--no-fastio] [--link url]

Positional arguments:
  folder          Output folder (equal to -f)
  script          File name without extension (equal to -s)

Flags:
  -f folder       Output folder (overrides positional argument)
  -s script       File name without extension (overrides positional argument)
  --link url      Insert problem link as comment
  --single        Generate template with single testcase (default: multiple)
  --yesno         Enable yes/no answer snippet
  --no-fastio     Disable fast I/O snippet
  --mark_as_last  Save the path as last script created
EOF
  exit 1
}

############################################
# Parse arguments
############################################

POSITIONAL=()

while [[ $# -gt 0 ]]; do
  case "$1" in
    -f|--folder)
      FOLDER_ARG="$2"
      shift 2
      ;;
    -s|--script)
      SCRIPT_ARG="$2"
      shift 2
      ;;
    --link)
      LINK_ARG="$2"
      shift 2
      ;;
    --single)
      MULTI_ARG=false
      shift
      ;;
    --yesno)
      YESNO_ARG=true
      shift
      ;;
    --no-fastio)
      FASTIO_ARG=false
      shift
      ;;
    -h|--help)
      usage
      ;;
    -*)
      echo "Unknown option: $1"
      usage
      ;;
    *)
      POSITIONAL+=("$1")
      shift
      ;;
  esac
done

# Apply positional args if -f/-s were not provided
if [ -n "${POSITIONAL[0]:-}" ] && [ -z "$FOLDER_ARG" ]; then
  FOLDER_ARG="${POSITIONAL[0]}"
fi

if [ -n "${POSITIONAL[1]:-}" ] && [ -z "$SCRIPT_ARG" ]; then
  SCRIPT_ARG="${POSITIONAL[1]}"
fi

############################################
# Validate required arguments
############################################

if [ -z "$FOLDER_ARG" ] || [ -z "$SCRIPT_ARG" ]; then
  err "Error: folder and script name are required."
  usage
fi

############################################
# Prepare output folder + filenames
############################################

mkdir -p "$SOLUTIONS_DIR"
FOLDER_DIR="${SOLUTIONS_DIR}/${FOLDER_ARG}"

mkdir -p "$FOLDER_DIR"

SCRIPT_NAME=$(echo "$SCRIPT_ARG" | sed 's/[<>:"\/\\|?*]/_/g')
OUTPUT_PATH="${FOLDER_DIR}/${SCRIPT_NAME}.cpp"

############################################
# Template file
############################################

TEMPLATE_FILE="${TEMPLATE_DIR}/template.cpp.tpl"

if [ ! -f "$TEMPLATE_FILE" ]; then
  err "Template not found: $TEMPLATE_FILE"
  exit 2
fi

TEMPLATE=$(<"$TEMPLATE_FILE")

############################################
# Helper: load snippet preserving newlines
############################################

load_snippet() {
  local snippet="$1"
  local path="$2"
  if [ -f "$path" ]; then
    printf '%s\n' "$(cat "$path")"
  else
    err "$snippet snippet not found at: $path"
  fi
}

############################################
# Load snippets
############################################

# Fast I/O
FAST_IO_SNIPPET=""
if [ "$FASTIO_ARG" = true ]; then
  FAST_IO_SNIPPET=$(load_snippet "Fast IO" "${TEMPLATE_DIR}/snippets/fast_io.cpp.snip")
  if [ ! -z "$FAST_IO_SNIPPET" ]; then ok "Fast IO snippet applied."; fi
fi

# Yes/No answers
YESNO_SNIPPET=""
if [ "$YESNO_ARG" = true ]; then
  YESNO_SNIPPET=$(load_snippet "Yes No answer" "${TEMPLATE_DIR}/snippets/yes_no_answer.cpp.snip")
  if [ ! -z "$YESNO_SNIPPET" ]; then ok "Yes No answer snippet applied."; fi
fi

# Test case wrapper logic
TEST_BLOCK=""
if [ "$MULTI_ARG" = true ]; then
  TEST_BLOCK=$(load_snippet "Multi test case" "${TEMPLATE_DIR}/snippets/multi_test_case.cpp.snip")
  if [ ! -z "$TEST_BLOCK" ]; then ok "Multi test case snippet applied."; fi
else
  TEST_BLOCK=$(load_snippet "Single test case" "${TEMPLATE_DIR}/snippets/single_test_case.cpp.snip")
  if [ ! -z "$TEST_BLOCK" ]; then ok "Single test case snippet applied."; fi
fi

############################################
# Fill placeholders
############################################

LINK_PLACEHOLDER="// link: ${LINK_ARG}"
SOLUTION_PLACEHOLDER="{{  code  }}"

OUTPUT="$TEMPLATE"
OUTPUT="${OUTPUT//\{\{FAST_IO\}\}/$FAST_IO_SNIPPET}"
OUTPUT="${OUTPUT//\{\{YESNO\}\}/$YESNO_SNIPPET}"
OUTPUT="${OUTPUT//\{\{TEST_BLOCK\}\}/$TEST_BLOCK}"
OUTPUT="${OUTPUT//\{\{LINK_PLACEHOLDER\}\}/$LINK_PLACEHOLDER}"
OUTPUT="${OUTPUT//\{\{SOLUTION_PLACEHOLDER\}\}/$SOLUTION_PLACEHOLDER}"

############################################
# Write output
############################################

printf '%s\n' "$OUTPUT" > "$OUTPUT_PATH"
RELATIVE_PATH=$(realpath "$OUTPUT_PATH")
ok "Generated at: $RELATIVE_PATH"

############################################
# Save path as last script
############################################

if [ "$MARK_AS_LAST_ARG" = true ]; then
  echo "$RELATIVE_PATH" > "$SCRIPT_DIR/last_script_path.txt"
fi

############################################
# Open in VS Code
############################################

if command -v code >/dev/null 2>&1; then
  WORKDIR=$(pwd)
  RELATIVE_PATH=$(realpath --relative-to="$WORKDIR" "$OUTPUT_PATH")
  code "$RELATIVE_PATH"
fi
