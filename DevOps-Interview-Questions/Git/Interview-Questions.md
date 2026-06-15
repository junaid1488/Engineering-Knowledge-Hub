# Git Interview Questions

## 1. What is Git?

Git is a distributed version control system used to track code changes.

---

## 2. What is Version Control?

A system that tracks changes to files over time.

---

## 3. Difference Between Git and GitHub?

| Git                  | GitHub           |
| -------------------- | ---------------- |
| Version Control Tool | Hosting Platform |
| Local                | Cloud Based      |

---

## 4. What is a Repository?

A storage location for code and project files.

---

## 5. What is git init?

```bash
git init
```

Creates a new Git repository.

---

## 6. What is git clone?

```bash
git clone <repo-url>
```

Copies a remote repository locally.

---

## 7. What is git add?

```bash
git add .
```

Adds changes to the staging area.

---

## 8. What is git commit?

```bash
git commit -m "message"
```

Saves staged changes.

---

## 9. What is git push?

```bash
git push origin main
```

Uploads local commits to a remote repository.

---

## 10. What is git pull?

```bash
git pull origin main
```

Fetches and merges remote changes.

---

## 11. What is a Branch?

An independent line of development.

---

## 12. What is git merge?

Combines changes from one branch into another.

---

## 13. What is a Merge Conflict?

Occurs when Git cannot automatically merge changes.

---

## 14. What is git rebase?

Moves commits to a new base commit creating a cleaner history.

---

## 15. Difference Between Merge and Rebase?

| Merge                | Rebase           |
| -------------------- | ---------------- |
| Keeps history        | Rewrites history |
| Creates merge commit | Cleaner history  |

---

## 16. What is HEAD?

Pointer to the current commit.

---

## 17. What is git stash?

Temporarily saves uncommitted changes.

---

## 18. What is git fetch?

Downloads changes without merging them.

---

## 19. What is .gitignore?

Specifies files Git should ignore.

---

## 20. Most Asked Question

### Git Workflow

```text
Working Directory
      ↓
git add
      ↓
Staging Area
      ↓
git commit
      ↓
Local Repository
      ↓
git push
      ↓
Remote Repository
```
