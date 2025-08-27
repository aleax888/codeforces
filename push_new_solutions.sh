#!/bin/bash

# Add all files to stage
git add .

# Get added files (new only)
FILES=$(git diff --cached --diff-filter=A --name-only)

# Are there new files?
if [ -z "$FILES" ]; then
  echo "There aren't new solutions."
  exit 0
fi

# Count number of new solutions
NUM_SOLUTIONS=$(echo "$FILES" | wc -l | tr -d ' ')

# Title
COMMIT_TITLE="+$NUM_SOLUTIONS solutions"

# Body: list of files
COMMIT_BODY=""
while read -r FILE; do
    # Get file name without extension
    SCRIPT_NAME=$(basename "$FILE" | sed 's/\.[^.]*$//')

    # Get folder name (used as difficulty)
    FOLDER_NAME=$(basename "$(dirname "$FILE")")

    # Append formatted line
    COMMIT_BODY+="● $SCRIPT_NAME ($FOLDER_NAME)\n"
done <<< "$FILES"

# Optional extra message from argument (if present)
EXTRA_MSG="$1"
if [ -n "$EXTRA_MSG" ]; then
    COMMIT_BODY+="\n$EXTRA_MSG\n"
fi

# Final commit message
git commit -m "$COMMIT_TITLE" -m "$(echo -e "$COMMIT_BODY")"

# Push
git push
       
