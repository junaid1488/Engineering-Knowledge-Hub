# Docker Commands Cheat Sheet (100+ Commands)

## 1. Docker Version & Info

```bash
docker version
docker info
docker system info
```

---

## 2. Images Commands

```bash
docker images
docker image ls
docker image inspect nginx
docker image history nginx
docker image rm nginx
docker rmi nginx
docker pull nginx
docker push username/image
docker tag nginx mynginx:v1
docker save nginx > nginx.tar
docker load < nginx.tar
docker image prune
docker image prune -a
```

---

## 3. Container Commands

```bash
docker ps
docker ps -a
docker create nginx
docker run nginx
docker run -it ubuntu bash
docker run -d nginx
docker run --name web nginx
docker start container_id
docker stop container_id
docker restart container_id
docker pause container_id
docker unpause container_id
docker kill container_id
docker rm container_id
docker rm -f container_id
docker rename old_name new_name
docker wait container_id
```

---

## 4. Container Inspection

```bash
docker inspect container_id
docker top container_id
docker stats
docker stats container_id
docker logs container_id
docker logs -f container_id
docker diff container_id
docker port container_id
```

---

## 5. Container Interaction

```bash
docker exec -it container_id bash
docker exec -it container_id sh
docker attach container_id
docker cp file.txt container_id:/tmp
docker cp container_id:/tmp/file.txt .
```

---

## 6. Networking Commands

```bash
docker network ls
docker network create mynetwork
docker network inspect mynetwork
docker network connect mynetwork container_id
docker network disconnect mynetwork container_id
docker network rm mynetwork
docker network prune
```

---

## 7. Volume Commands

```bash
docker volume ls
docker volume create myvolume
docker volume inspect myvolume
docker volume rm myvolume
docker volume prune
```

---

## 8. Build Commands

```bash
docker build .
docker build -t myapp .
docker build --no-cache .
docker build -f Dockerfile.dev .
docker build -t myapp:v1 .
```

---

## 9. Dockerfile Testing

```bash
docker run myapp
docker run -p 3000:3000 myapp
docker run -e NODE_ENV=production myapp
docker run --rm myapp
```

---

## 10. Resource Management

```bash
docker run --memory=512m nginx
docker run --cpus=1 nginx
docker update --memory=1g container_id
docker update --cpus=2 container_id
```

---

## 11. Docker Compose Commands

```bash
docker compose up
docker compose up -d
docker compose down
docker compose restart
docker compose stop
docker compose start
docker compose logs
docker compose logs -f
docker compose ps
docker compose build
docker compose pull
docker compose config
```

---

## 12. Swarm Commands

```bash
docker swarm init
docker swarm join
docker swarm leave
docker node ls
docker service ls
docker service create nginx
docker service scale web=5
docker service rm web
```

---

## 13. System Cleanup

```bash
docker system df
docker system prune
docker system prune -a
docker container prune
docker image prune
docker volume prune
docker network prune
```

---

## 14. Registry Commands

```bash
docker login
docker logout
docker search nginx
docker pull nginx
docker push username/app
```

---

## 15. Secret Management

```bash
docker secret create db_password password.txt
docker secret ls
docker secret inspect db_password
docker secret rm db_password
```

---

## 16. Context Commands

```bash
docker context ls
docker context create dev
docker context use dev
docker context inspect dev
docker context rm dev
```

---

## 17. Advanced Commands

```bash
docker events
docker history nginx
docker export container_id > backup.tar
docker import backup.tar myimage
docker checkpoint create
docker plugin ls
docker plugin install
docker trust inspect nginx
docker manifest inspect nginx
```

---

## 18. Most Important Interview Commands

```bash
docker ps
docker ps -a
docker images
docker pull nginx
docker run nginx
docker run -d nginx
docker run -p 80:80 nginx
docker exec -it container_id bash
docker logs container_id
docker inspect container_id
docker stop container_id
docker rm container_id
docker rmi nginx
docker build -t myapp .
docker network ls
docker volume ls
docker compose up -d
docker system prune
```

---

## Quick Revision (Top 20 Commands)

```bash
docker ps
docker ps -a
docker images
docker pull nginx
docker run nginx
docker run -d nginx
docker stop container_id
docker start container_id
docker restart container_id
docker rm container_id
docker rmi image_name
docker build -t myapp .
docker logs container_id
docker exec -it container_id bash
docker inspect container_id
docker network ls
docker volume ls
docker compose up
docker compose down
docker system prune
```
