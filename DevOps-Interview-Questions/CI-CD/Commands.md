# CI/CD Important Commands

## Git Commands

```bash
git add .
git commit -m "message"
git push origin main
git pull origin main
git status
```

---

## Jenkins Commands

```bash
systemctl start jenkins
systemctl stop jenkins
systemctl restart jenkins
systemctl status jenkins
journalctl -u jenkins
```

---

## Docker Commands

```bash
docker build -t app .
docker images
docker run -d app
docker ps
docker logs container_id
```

---

## Kubernetes Commands

```bash
kubectl get pods
kubectl get deployments
kubectl apply -f app.yaml
kubectl rollout status deployment app
kubectl rollout undo deployment app
```

---

## GitHub Actions

```bash
git push origin main
```

Triggers workflow automatically.

---

## Top Interview Commands

```bash
git status
git push
docker build
docker run
kubectl apply
kubectl get pods
systemctl status jenkins
```
