# Docker Troubleshooting (Quick Guide)

## 1. Docker Command Not Found

```bash
docker --version
```

**Fix:** Install Docker and restart terminal.

---

## 2. Cannot Connect to Docker Daemon

```bash
sudo systemctl start docker
sudo systemctl status docker
```

**Fix:** Start Docker service.

---

## 3. Permission Denied

```bash
sudo usermod -aG docker $USER
```

**Fix:** Add user to Docker group and relogin.

---

## 4. Port Already in Use

```bash
docker run -p 8080:80 nginx
```

**Fix:** Use a different host port.

---

## 5. Container Exits Immediately

```bash
docker ps -a
docker logs <container_id>
```

**Fix:** Check application logs.

---

## 6. Image Pull Failed

```bash
docker login
docker pull nginx
```

**Fix:** Verify image name and login credentials.

---

## 7. No Internet Inside Container

```bash
docker network ls
docker network inspect bridge
```

**Fix:** Check Docker network configuration.

---

## 8. Disk Space Full

```bash
docker system df
docker system prune -a
```

**Fix:** Remove unused images and containers.

---

## 9. Cannot Remove Image

```bash
docker rm <container_id>
docker rmi <image_name>
```

**Fix:** Remove dependent containers first.

---

## 10. Container Name Already Exists

```bash
docker ps -a
docker rm <container_name>
```

**Fix:** Delete existing container or use a new name.

---

## 11. Docker Compose Service Fails

```bash
docker compose logs
docker compose config
```

**Fix:** Check logs and YAML syntax.

---

## 12. High CPU or Memory Usage

```bash
docker stats
```

**Fix:** Apply resource limits.

```bash
docker run --cpus=1 --memory=512m nginx
```

---

# Essential Debug Commands

```bash
docker ps
docker ps -a
docker logs <container_id>
docker inspect <container_id>
docker exec -it <container_id> bash
docker stats
docker network ls
docker volume ls
docker system df
docker system prune
```

## Interview Answer

**How do you troubleshoot a Docker container?**

1. Check status → `docker ps -a`
2. View logs → `docker logs`
3. Inspect container → `docker inspect`
4. Verify network & volumes
5. Monitor resources → `docker stats`
6. Restart or rebuild if needed

```
```
