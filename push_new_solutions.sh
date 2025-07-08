#!/bin/bash

git add .

# get Added files
FILES=$(git diff --cached --diff-filter=A --name-only)

# are there new files?
if [ -z "$FILES" ]; then
  echo "There aren't new solutions."
  exit 0
fi

# build commit message
COMMIT_MSG="new solutions:"
while read -r FILE; do
    # get problem name
    SCRIPT_NAME=$(basename "$FILE" | sed 's/\.[^.]*$//')
    
    # get problem difficulty
    FOLDER_NAME=$(basename "$(dirname "$FILE")")
    
    # concatenate to commit message
    COMMIT_MSG+="\n- $SCRIPT_NAME ($FOLDER_NAME)"
done <<< "$FILES"

git commit -m "$COMMIT_MSG"
git push