# Docker Interview Questions - Beginner

## 1. What is Docker?

Docker is an open-source containerization platform that enables developers to package applications and their dependencies into lightweight, portable containers.

### Key Benefits

* Consistent environments
* Faster deployment
* Easy scalability
* Efficient resource utilization

---

## 2. What is Containerization?

Containerization is the process of packaging an application along with its dependencies, libraries, and configurations into a single unit called a container.

### Benefits

* Portability
* Isolation
* Faster startup times
* Better resource efficiency

---

## 3. What is a Docker Container?

A Docker container is a lightweight, standalone, executable package that contains everything required to run an application.

### Example

```bash
docker run nginx
```

---

## 4. What is a Docker Image?

A Docker image is a read-only template used to create Docker containers.

### Example

```bash
docker pull nginx
```

---

## 5. Difference Between VM and Container?

| Virtual Machine     | Container           |
| ------------------- | ------------------- |
| Has its own OS      | Shares host OS      |
| Heavyweight         | Lightweight         |
| Slow startup        | Fast startup        |
| More resource usage | Less resource usage |

---

## 6. Difference Between Image and Container?

| Image     | Container        |
| --------- | ---------------- |
| Blueprint | Running instance |
| Read-only | Read/Write       |
| Static    | Dynamic          |

---

## 7. What is Docker Hub?

Docker Hub is a cloud-based repository where Docker images can be stored, shared, and managed.

### Example

```bash
docker pull ubuntu
```

---

## 8. What is a Docker Registry?

A Docker Registry is a storage and distribution system for Docker images.

### Types

* Public Registry (Docker Hub)
* Private Registry

---

## 9. What is a Dockerfile?

A Dockerfile is a text file containing instructions to build a Docker image.

### Example

```dockerfile
FROM node:20
WORKDIR /app
COPY . .
RUN npm install
CMD ["npm","start"]
```

---

## 10. What is a Docker Volume?

Docker Volumes are used for persistent data storage outside the container lifecycle.

### Example

```bash
docker volume create myvolume
```

---

## 11. What is a Docker Network?

Docker Network allows containers to communicate with each other and external systems.

### Example

```bash
docker network ls
```

---

## 12. What is Port Mapping?

Port mapping connects a container port to a host machine port.

### Example

```bash
docker run -p 3000:3000 myapp
```

Format:

```text
Host Port : Container Port
```

---

## 13. What is Docker Compose?

Docker Compose is a tool used to define and manage multi-container Docker applications.

### Example

```yaml
version: '3'
services:
  app:
    image: nginx
```

### Run

```bash
docker-compose up
```

---

## 14. What is the CMD Instruction?

CMD specifies the default command that runs when a container starts.

### Example

```dockerfile
CMD ["node", "app.js"]
```

---

## 15. What is the ENTRYPOINT Instruction?

ENTRYPOINT defines the main executable that always runs when the container starts.

### Example

```dockerfile
ENTRYPOINT ["python"]
```

---

## 16. Difference Between CMD and ENTRYPOINT?

| CMD                      | ENTRYPOINT            |
| ------------------------ | --------------------- |
| Can be overridden easily | Difficult to override |
| Default command          | Main executable       |
| Optional                 | Usually mandatory     |

---

## 17. How to List Running Containers?

```bash
docker ps
```

To view all containers:

```bash
docker ps -a
```

---

## 18. How to Stop a Container?

```bash
docker stop <container_id>
```

Example:

```bash
docker stop a1b2c3d4
```

---

## 19. How to Remove an Image?

```bash
docker rmi <image_name>
```

Example:

```bash
docker rmi nginx
```

---

## 20. How to Build a Docker Image?

```bash
docker build -t myapp .
```

### Explanation

* `build` → Build image
* `-t` → Assign tag/name
* `.` → Current directory containing Dockerfile

### Verify

```bash
docker images
```

---

## Quick Revision Commands

```bash
docker ps
docker ps -a
docker images
docker pull nginx
docker run nginx
docker stop <container_id>
docker rm <container_id>
docker rmi <image_name>
docker build -t myapp .
docker-compose up
```
