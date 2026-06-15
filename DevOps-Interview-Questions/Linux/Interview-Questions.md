# Linux Interview Questions (Important)

## 1. What is Linux?

Linux is an open-source Unix-like operating system.

---

## 2. What is the Linux Kernel?

The kernel is the core component of Linux that manages hardware and system resources.

---

## 3. What is a Shell?

A shell is a command-line interpreter that allows users to interact with the operating system.

Examples:

* Bash
* Zsh
* Sh

---

## 4. Difference Between Linux and Unix?

| Linux       | Unix               |
| ----------- | ------------------ |
| Open Source | Mostly Proprietary |
| Free        | Commercial         |

---

## 5. What is the Root User?

Root is the superuser with full system privileges.

---

## 6. What is a Process?

A process is a running instance of a program.

---

## 7. What is a Daemon?

A daemon is a background process.

Examples:

* sshd
* nginx
* docker

---

## 8. What is PID?

PID (Process ID) uniquely identifies a process.

---

## 9. What is a File Descriptor?

A number used by the OS to identify open files.

---

## 10. What are Permissions in Linux?

* Read (r)
* Write (w)
* Execute (x)

---

## 11. What is chmod?

Used to change file permissions.

Example:

```bash
chmod 755 file.sh
```

---

## 12. What is chown?

Changes file ownership.

Example:

```bash
chown user:user file.txt
```

---

## 13. What is SSH?

Secure Shell is used for secure remote access.

---

## 14. What is grep?

Searches text using patterns.

Example:

```bash
grep "error" app.log
```

---

## 15. What is a Pipe (|)?

Used to pass output from one command to another.

Example:

```bash
ps aux | grep nginx
```

---

## 16. What is a Symbolic Link?

```bash
ln -s source target
```

Acts like a shortcut.

---

## 17. What is a Hard Link?

Points directly to the same inode as the original file.

---

## 18. What is Cron?

Used to schedule recurring tasks.

---

## 19. What is Systemd?

Linux service manager.

---

## 20. What is the Difference Between Soft Link and Hard Link?

| Soft Link                | Hard Link   |
| ------------------------ | ----------- |
| Shortcut                 | Same inode  |
| Can cross filesystems    | Cannot      |
| Breaks if source deleted | Still works |
