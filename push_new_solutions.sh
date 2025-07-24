#!/bin/bash

# Add all files to stage
git add .

# Get added files
FILES=$(git diff --cached --diff-filter=A --name-only)

# Are there new files?
if [ -z "$FILES" ]; then
  echo "There aren't new solutions."
  exit 0
fi

# Build commit message
COMMIT_MSG="new solutions:"
while read -r FILE; do
    # Get problem name
    SCRIPT_NAME=$(basename "$FILE" | sed 's/\.[^.]*$//')
    
    # Fet problem difficulty
    FOLDER_NAME=$(basename "$(dirname "$FILE")")
    
    # Concatenate to commit message
    COMMIT_MSG+=" - $SCRIPT_NAME ($FOLDER_NAME)"
done <<< "$FILES"

# Commit files with builded message
git commit -m "$COMMIT_MSG"

# Push files
git push