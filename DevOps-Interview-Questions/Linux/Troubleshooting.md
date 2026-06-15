# Linux Troubleshooting Interview Questions

## 1. Server is Slow. What Will You Check?

```bash
top
free -m
df -h
```

Check CPU, Memory, and Disk usage.

---

## 2. How Do You Check Running Processes?

```bash
ps aux
top
```

---

## 3. Disk Space is Full. How Do You Troubleshoot?

```bash
df -h
du -sh /*
```

Identify large files/directories.

---

## 4. High CPU Usage. What Will You Do?

```bash
top
htop
```

Find the process consuming CPU.

---

## 5. High Memory Usage. How Do You Check?

```bash
free -m
top
```

---

## 6. Service is Not Running. How Do You Verify?

```bash
systemctl status nginx
```

Check service status and logs.

---

## 7. How Do You View System Logs?

```bash
journalctl -xe
tail -f /var/log/syslog
```

---

## 8. SSH Connection Failed. What Could Be the Reasons?

* SSH service stopped
* Firewall blocked
* Wrong credentials

Check:

```bash
systemctl status sshd
```

---

## 9. Application is Not Accessible. What Will You Check?

* Service status
* Port status
* Firewall
* Logs

---

## 10. How Do You Check Open Ports?

```bash
ss -tulpn
```

---

## 11. Permission Denied Error. How Do You Fix It?

```bash
ls -l
chmod
chown
```

Verify permissions and ownership.

---

## 12. Process is Hung. How Do You Kill It?

```bash
kill PID
kill -9 PID
```

---

## 13. Server Rebooted Unexpectedly. How Do You Investigate?

```bash
journalctl -b -1
last reboot
```

Check previous boot logs.

---

## 14. Network Connectivity Issue. How Do You Troubleshoot?

```bash
ip a
ping google.com
traceroute google.com
```

---

## 15. Most Asked Interview Question

### What is your Linux Troubleshooting Approach?

1. Identify the issue
2. Check logs
3. Check service status
4. Check CPU, RAM, Disk
5. Verify network connectivity
6. Apply fix
7. Monitor system

### Essential Commands

```bash
top
free -m
df -h
ps aux
journalctl -xe
systemctl status
ping
ss -tulpn
```
