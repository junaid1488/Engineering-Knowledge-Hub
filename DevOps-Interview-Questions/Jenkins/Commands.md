# Jenkins Commands Cheat Sheet

## Service Management

```bash
systemctl start jenkins
systemctl stop jenkins
systemctl restart jenkins
systemctl status jenkins
systemctl enable jenkins
```

---

## Logs

```bash
journalctl -u jenkins
journalctl -u jenkins -f
tail -f /var/log/jenkins/jenkins.log
```

---

## Jenkins CLI

```bash
java -jar jenkins-cli.jar help
java -jar jenkins-cli.jar version
java -jar jenkins-cli.jar list-jobs
java -jar jenkins-cli.jar build my-job
```

---

## Plugin Management

```bash
jenkins-plugin-cli --list
jenkins-plugin-cli --plugins git
```

---

## Docker + Jenkins

```bash
docker ps
docker logs jenkins
docker restart jenkins
```

---

## Top Interview Commands

```bash
systemctl status jenkins
systemctl restart jenkins
journalctl -u jenkins
docker logs jenkins
```
