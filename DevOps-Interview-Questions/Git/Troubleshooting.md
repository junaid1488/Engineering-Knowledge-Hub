# Git Troubleshooting Interview Questions

## 1. Merge Conflict. How Do You Resolve It?

```bash
git status
```

Edit conflicting files and commit again.

---

## 2. Accidentally Committed Wrong Code?

```bash
git revert HEAD
```

or

```bash
git reset --soft HEAD~1
```

---

## 3. Wrong Branch Commit?

```bash
git cherry-pick <commit-id>
```

Move commit to correct branch.

---

## 4. Undo Local Changes?

```bash
git restore .
```

---

## 5. Undo Staged Changes?

```bash
git reset
```

---

## 6. Lost Uncommitted Changes?

Check:

```bash
git stash list
```

---

## 7. Push Rejected?

```bash
git pull origin main
```

Then resolve conflicts and push again.

---

## 8. Repository is Behind Remote?

```bash
git pull
```

---

## 9. Wrong Commit Message?

```bash
git commit --amend -m "new message"
```

---

## 10. Accidentally Deleted Branch?

```bash
git reflog
```

Recover branch from commit history.

---

## 11. Check Who Changed a File?

```bash
git blame file.txt
```

---

## 12. Find Specific Commit?

```bash
git log --oneline
```

---

## 13. Large File Added by Mistake?

```bash
git rm --cached file.zip
```

---

## 14. Recover Lost Commit?

```bash
git reflog
```

---

## 15. Most Asked Question

### What is your Git Troubleshooting Workflow?

1. Check status
2. Check logs
3. Check branch
4. Resolve conflicts
5. Verify remote sync

Commands:

```bash
git status
git log --oneline
git branch
git pull
git push
```
