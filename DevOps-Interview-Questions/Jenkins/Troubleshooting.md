# Jenkins Troubleshooting Interview Questions

## 1. Jenkins Service Not Starting?

```bash
systemctl status jenkins
```

Check logs and Java installation.

---

## 2. How Do You Check Jenkins Logs?

```bash
journalctl -u jenkins
```

---

## 3. Build Failed. What Will You Check?

* Console Output
* Build Logs
* Pipeline Script

---

## 4. Jenkins UI Not Accessible?

Verify:

* Jenkins Service
* Port 8080
* Firewall

---

## 5. Git Repository Not Cloning?

Check:

* Repository URL
* Credentials
* Network Connectivity

---

## 6. Webhook Not Triggering?

Verify:

* Webhook URL
* Jenkins Endpoint
* GitHub/GitLab Configuration

---

## 7. Agent Offline?

Check:

* Agent Status
* Network Connectivity
* SSH Configuration

---

## 8. Plugin Not Working?

Update or reinstall plugin.

---

## 9. Pipeline Stuck?

Check:

* Agent Availability
* Running Builds
* Console Logs

---

## 10. Disk Space Full?

```bash
df -h
```

Clean old builds and artifacts.

---

## 11. Jenkins Running Slow?

Check:

* CPU Usage
* Memory Usage
* Plugin Count

---

## 12. Credentials Not Working?

Verify:

* Username
* Password/Token
* Credential Scope

---

## 13. Docker Build Failing in Jenkins?

Check:

* Docker Installation
* Docker Permissions
* Docker Daemon

---

## 14. How Do You Restart Jenkins?

```bash
systemctl restart jenkins
```

---

## 15. Most Asked Interview Question

### Jenkins Troubleshooting Workflow

1. Check Job Logs
2. Check Jenkins Logs
3. Verify Agent
4. Verify Credentials
5. Verify Network
6. Verify Resources

Commands:

```bash
systemctl status jenkins
journalctl -u jenkins
df -h
free -m
```
