# Docker Interview Questions - Advanced (20 Questions)

## 1. What is a Multi-Stage Build?

A multi-stage build uses multiple `FROM` statements in a Dockerfile to reduce image size and separate build dependencies from runtime dependencies.

### Benefits

* Smaller images
* Better security
* Faster deployment

---

## 2. Why are Multi-Stage Builds Important?

They remove unnecessary build tools and dependencies from the final image, making it lightweight and production-ready.

---

## 3. What is Docker Swarm?

Docker Swarm is Docker's native container orchestration tool used for managing multiple Docker hosts as a cluster.

### Features

* Load balancing
* Service discovery
* High availability
* Scaling

---

## 4. What is a Swarm Manager Node?

A manager node controls the cluster and schedules tasks across worker nodes.

---

## 5. What is a Worker Node in Docker Swarm?

Worker nodes execute tasks assigned by manager nodes.

---

## 6. What is an Overlay Network?

An overlay network enables communication between containers running on different Docker hosts.

### Common Use Case

Docker Swarm clusters.

---

## 7. What is Docker Secret?

Docker Secrets securely store sensitive data such as:

* Passwords
* API Keys
* Certificates
* Tokens

---

## 8. Why Should Environment Variables Not Store Secrets?

Environment variables can be exposed through logs or inspection commands, making them less secure than Docker Secrets.

---

## 9. What is Rootless Docker?

Rootless Docker allows Docker to run without root privileges, improving system security.

### Benefits

* Reduced attack surface
* Better isolation
* Enhanced security

---

## 10. What is Docker-in-Docker (DinD)?

Docker-in-Docker refers to running Docker inside a Docker container.

### Common Use Cases

* CI/CD Pipelines
* Automated Testing
* Build Environments

---

## 11. What is Docker Health Check?

Health checks determine whether a container is functioning correctly.

### Example

```dockerfile
HEALTHCHECK CMD curl -f http://localhost || exit 1
```

---

## 12. What is Docker Registry Mirror?

A registry mirror caches images locally to improve image pull performance and reduce external network traffic.

---

## 13. What is Docker Content Trust?

Docker Content Trust ensures image authenticity and integrity through digital signatures.

### Enable

```bash
export DOCKER_CONTENT_TRUST=1
```

---

## 14. What is the Difference Between Docker Swarm and Kubernetes?

| Docker Swarm          | Kubernetes              |
| --------------------- | ----------------------- |
| Simpler setup         | More complex            |
| Docker-native         | Vendor-neutral          |
| Easier learning curve | More features           |
| Smaller deployments   | Large-scale deployments |

---

## 15. What is Image Optimization?

Image optimization reduces image size while improving performance.

### Techniques

* Use Alpine images
* Multi-stage builds
* Minimize layers
* Remove unnecessary packages

---

## 16. What is a Distroless Image?

Distroless images contain only application runtime dependencies and exclude shells, package managers, and other unnecessary tools.

### Benefits

* Smaller size
* Better security
* Reduced attack surface

---

## 17. What is Docker Resource Limiting?

Docker allows limiting CPU and memory usage of containers.

### Example

```bash
docker run --memory=512m --cpus=1 nginx
```

---

## 18. How Does Docker Logging Work?

Docker captures application output from:

* STDOUT
* STDERR

### Logging Drivers

* json-file
* syslog
* journald
* fluentd
* awslogs

---

## 19. Explain Docker Architecture.

### Components

1. Docker Client
2. Docker Daemon
3. Docker Engine
4. Docker Registry
5. Docker Images
6. Docker Containers

### Workflow

Client → Daemon → Image → Container

---

## 20. How Would You Secure Docker in Production?

### Best Practices

* Use Rootless Docker
* Avoid privileged containers
* Use Docker Secrets
* Scan images for vulnerabilities
* Use minimal base images
* Enable Content Trust
* Restrict container resources
* Keep Docker updated
* Use read-only file systems where possible
* Apply least-privilege principles
