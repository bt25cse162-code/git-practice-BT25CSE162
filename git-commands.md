# Git Commands and Their Uses

## 1. git init
Initializes a new Git repository.

## 2. git status
Shows the current status of files in the repository.

## 3. git add
Adds changes to the staging area before committing.

Example:
`git add .`

## 4. git commit
Saves staged changes with a descriptive message.

Example:
`git commit -m "Add assignment files"`

## 5. git branch
Displays or creates branches for working on different features.

## 6. git checkout
Switches between branches.

## 7. git merge
Combines changes from one branch into another.

## 8. git remote
Manages connections to remote repositories such as GitHub.

## 9. git push
Uploads local commits to GitHub.

Example:
`git push origin main`

## 10. git pull
Downloads and integrates changes from a remote repository.

## Merge Conflict and Resolution

A merge conflict occurs when two branches modify the same part of a file differently. Git cannot automatically decide which change to keep.

To resolve a conflict:
1. Open the file containing the conflict.
2. Review both versions of the content.
3. Edit the file to keep the correct content.
4. Remove the conflict markers.
5. Save the file.
6. Stage and commit the resolved file.
