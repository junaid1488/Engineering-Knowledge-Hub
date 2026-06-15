# Git Commands Cheat Sheet

## Repository

```bash
git init
git clone <url>
git status
git log
git log --oneline
```

## Staging & Commit

```bash
git add .
git add file.txt
git commit -m "message"
git commit --amend
```

## Branching

```bash
git branch
git branch dev
git checkout dev
git checkout -b feature
git switch main
```

## Merge & Rebase

```bash
git merge dev
git rebase main
git merge --abort
```

## Remote Repository

```bash
git remote -v
git pull origin main
git push origin main
git fetch
```

## Stash

```bash
git stash
git stash list
git stash apply
git stash pop
```

## Undo Changes

```bash
git reset --soft HEAD~1
git reset --hard HEAD~1
git revert HEAD
```

## Tags

```bash
git tag
git tag v1.0
git push origin v1.0
```

## Top 10 Interview Commands

```bash
git status
git add .
git commit -m "msg"
git push
git pull
git clone
git branch
git checkout -b
git merge
git stash
```
