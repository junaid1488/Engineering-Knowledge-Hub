# Kubernetes Interview Questions (Intermediate + Advanced)

## Intermediate Level

### 1. What is a ConfigMap?

Stores non-sensitive configuration data as key-value pairs.

### 2. What is a Secret?

Stores sensitive information such as passwords, API keys, and tokens.

### 3. Difference Between ConfigMap and Secret?

| ConfigMap          | Secret         |
| ------------------ | -------------- |
| Non-sensitive data | Sensitive data |
| Plain text         | Base64 encoded |

---

### 4. What is Ingress?

Manages external HTTP/HTTPS traffic to services.

### 5. Difference Between Ingress and Service?

| Service      | Ingress                 |
| ------------ | ----------------------- |
| Exposes Pods | Routes external traffic |
| Layer 4      | Layer 7                 |

---

### 6. What is a DaemonSet?

Ensures one Pod runs on every node.

**Example:** Log collection agents.

---

### 7. What is a StatefulSet?

Manages stateful applications with stable identities.

**Example:** MySQL, MongoDB.

---

### 8. Difference Between Deployment and StatefulSet?

| Deployment       | StatefulSet      |
| ---------------- | ---------------- |
| Stateless Apps   | Stateful Apps    |
| Random Pod Names | Stable Pod Names |

---

### 9. What is a Persistent Volume (PV)?

Storage resource available in the cluster.

---

### 10. What is a Persistent Volume Claim (PVC)?

A request for storage by a Pod.

---

### 11. Difference Between PV and PVC?

| PV             | PVC             |
| -------------- | --------------- |
| Actual Storage | Storage Request |

---

### 12. What is Horizontal Pod Autoscaler (HPA)?

Automatically scales Pods based on CPU or memory usage.

---

### 13. What is Vertical Pod Autoscaler (VPA)?

Automatically adjusts CPU and memory allocation for Pods.

---

### 14. What are Resource Requests and Limits?

* Request → Minimum resources
* Limit → Maximum resources

---

### 15. What is Node Selector?

Schedules Pods on specific nodes based on labels.

---

### 16. What are Labels and Selectors?

Labels identify resources.

Selectors filter resources using labels.

---

### 17. What is a Namespace?

Provides logical isolation between resources.

---

### 18. What is a Headless Service?

A Service without a cluster IP.

Used mainly with StatefulSets.

---

### 19. How Does Service Discovery Work?

Kubernetes automatically assigns DNS names to services.

---

### 20. What is kube-proxy?

Handles network communication between Services and Pods.

---

# Advanced Level

### 21. What are Taints and Tolerations?

Taints prevent Pods from being scheduled on nodes.

Tolerations allow Pods to run on tainted nodes.

---

### 22. Difference Between Taints/Tolerations and Node Selectors?

| Node Selector | Taints     |
| ------------- | ---------- |
| Attract Pods  | Repel Pods |

---

### 23. What is Node Affinity?

Advanced scheduling mechanism based on node labels.

---

### 24. What is Pod Affinity and Anti-Affinity?

* Affinity → Place Pods together
* Anti-Affinity → Separate Pods

---

### 25. How Does the Kubernetes Scheduler Work?

Assigns Pods to nodes based on:

* Resources
* Affinity Rules
* Taints/Tolerations
* Constraints

---

### 26. What is the Control Plane?

Manages the Kubernetes cluster.

Components:

* API Server
* Scheduler
* Controller Manager
* etcd

---

### 27. Explain Kubernetes Architecture.

```text
User
 │
 ▼
API Server
 │
 ▼
Scheduler
 │
 ▼
Worker Nodes
 │
 ▼
Pods
```

---

### 28. What is etcd?

Distributed key-value store used to maintain cluster state.

---

### 29. What is a Custom Resource Definition (CRD)?

Allows users to create custom Kubernetes resources.

---

### 30. What are Operators?

Applications that automate Kubernetes operations using CRDs.

---

### 31. What is a Service Mesh?

Infrastructure layer managing service-to-service communication.

---

### 32. What is Istio?

Popular service mesh used for:

* Traffic Management
* Security
* Observability

---

### 33. What is Network Policy?

Controls communication between Pods.

---

### 34. How Do You Secure a Kubernetes Cluster?

* RBAC
* Network Policies
* Secrets
* TLS Encryption
* Pod Security Policies

---

### 35. How Does Rolling Update Work?

Updates Pods gradually without downtime.

---

### 36. What is a Rollback?

Reverts application to a previous version.

---

### 37. What is a Canary Deployment?

Deploys new versions to a small subset of users before full rollout.

---

### 38. What is Blue-Green Deployment?

Maintains two environments:

* Blue → Current
* Green → New

Traffic switches after validation.

---

### 39. How Do You Troubleshoot a Pod Stuck in Pending State?

Check:

```bash
kubectl describe pod <pod-name>
```

Common Causes:

* Insufficient Resources
* Node Constraints
* PVC Issues

---

### 40. How Do You Troubleshoot CrashLoopBackOff?

Check:

```bash
kubectl logs <pod-name>
kubectl describe pod <pod-name>
```

Common Causes:

* Application Crash
* Wrong Configuration
* Missing Secrets
* Resource Limits

---

# Most Important Interview Topics

1. Deployment
2. Service
3. ConfigMap
4. Secret
5. Ingress
6. PV & PVC
7. StatefulSet
8. DaemonSet
9. HPA
10. Taints & Tolerations
11. Node Affinity
12. etcd
13. Kubernetes Architecture
14. Rolling Updates
15. CrashLoopBackOff
