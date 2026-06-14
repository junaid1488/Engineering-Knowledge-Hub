# Docker Networking

Docker networking enables communication between containers, the host machine, and external networks.

---

# Why Docker Networking?

Docker containers are isolated by default. Networking allows:

* Container-to-container communication
* Container-to-host communication
* Access to external services
* Load balancing and service discovery

---

# Docker Network Drivers

Docker provides several network drivers:

| Driver  | Description                         |
| ------- | ----------------------------------- |
| Bridge  | Default network for containers      |
| Host    | Shares host networking stack        |
| None    | No networking                       |
| Overlay | Multi-host networking               |
| Macvlan | Assigns MAC addresses to containers |

---

# 1. Bridge Network

Bridge is the default Docker network.

### Create Network

```bash
docker network create mybridge
```

### Run Container

```bash
docker run -d --name web1 --network mybridge nginx
```

### Verify

```bash
docker network ls
```

### Inspect Network

```bash
docker network inspect mybridge
```

---

# 2. Host Network

Host networking removes network isolation.

### Example

```bash
docker run --network host nginx
```

### Advantages

* Better performance
* No NAT overhead

### Disadvantages

* Less isolation
* Potential port conflicts

---

# 3. None Network

Completely disables networking.

### Example

```bash
docker run --network none nginx
```

### Use Cases

* Security testing
* Isolated workloads

---

# 4. Overlay Network

Overlay networks enable communication between containers across multiple hosts.

### Create Overlay Network

```bash
docker network create \
--driver overlay \
mynet
```

### Common Use Cases

* Docker Swarm
* Multi-host clusters

---

# 5. Macvlan Network

Assigns a unique MAC address to each container.

### Example

```bash
docker network create -d macvlan \
--subnet=192.168.1.0/24 \
--gateway=192.168.1.1 \
mymacvlan
```

### Benefits

* Containers appear as physical devices
* Direct LAN access

---

# Port Mapping

Port mapping connects host ports to container ports.

### Syntax

```bash
docker run -p HOST_PORT:CONTAINER_PORT image
```

### Example

```bash
docker run -p 8080:80 nginx
```

### Explanation

```text
Host Port      : 8080
Container Port : 80
```

Access application:

```text
http://localhost:8080
```

---

# Expose Ports

Expose documents the port used by the application.

### Dockerfile

```dockerfile
EXPOSE 80
```

### Important

EXPOSE does not publish the port automatically.

---

# Container Communication

Containers on the same network can communicate using container names.

### Example

Container A:

```bash
docker run -d \
--name frontend \
--network mybridge nginx
```

Container B:

```bash
docker run -it \
--name backend \
--network mybridge ubuntu
```

Backend can access frontend using:

```text
http://frontend
```

---

# Connect Container to Existing Network

```bash
docker network connect mybridge container_id
```

---

# Disconnect Container

```bash
docker network disconnect mybridge container_id
```

---

# List Networks

```bash
docker network ls
```

---

# Inspect Network

```bash
docker network inspect bridge
```

---

# Remove Network

```bash
docker network rm mybridge
```

---

# Remove Unused Networks

```bash
docker network prune
```

---

# Networking Commands Cheat Sheet

```bash
docker network ls

docker network create mynetwork

docker network inspect mynetwork

docker network connect mynetwork container_id

docker network disconnect mynetwork container_id

docker network rm mynetwork

docker network prune

docker run -p 8080:80 nginx

docker run --network host nginx

docker run --network none nginx
```

---

# Interview Questions

## What is Docker Networking?

Docker networking enables communication between containers, hosts, and external networks.

---

## What are the Types of Docker Networks?

* Bridge
* Host
* None
* Overlay
* Macvlan

---

## What is the Default Docker Network?

Bridge Network.

---

## Difference Between Bridge and Host Network?

| Bridge       | Host                |
| ------------ | ------------------- |
| Isolated     | Shares host network |
| Safer        | Faster              |
| Default mode | Performance-focused |

---

## What is Port Mapping?

Port mapping exposes container ports to the host machine using the `-p` option.

---

## What is Overlay Network?

An overlay network allows communication between containers running on different Docker hosts.

---

# Best Practices

* Use custom bridge networks instead of default bridge.
* Avoid using host networking unless required.
* Expose only necessary ports.
* Use overlay networks for clusters.
* Regularly inspect network configurations.
* Remove unused networks.
