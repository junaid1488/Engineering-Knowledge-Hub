# Kubernetes Networking Interview Questions

## 1. What is Kubernetes Networking?

Kubernetes networking enables communication between Pods, Services, and external clients.

---

## 2. What are the core requirements of Kubernetes Networking?

* Pod-to-Pod communication
* Pod-to-Service communication
* External-to-Service communication

---

## 3. What is a Service in Kubernetes?

A Service provides a stable endpoint to access Pods.

---

## 4. What are the types of Services?

* ClusterIP
* NodePort
* LoadBalancer
* ExternalName

---

## 5. What is ClusterIP?

Default Service type used for internal cluster communication.

---

## 6. What is NodePort?

Exposes a Service on a static port of every node.

---

## 7. What is LoadBalancer?

Exposes applications externally using a cloud load balancer.

---

## 8. What is Ingress?

An API object that manages external HTTP/HTTPS traffic routing.

---

## 9. Difference Between Service and Ingress?

| Service         | Ingress         |
| --------------- | --------------- |
| L4 Routing      | L7 Routing      |
| Internal Access | External Access |

---

## 10. What is kube-proxy?

Network component that routes traffic to the correct Pods.

---

## 11. What is DNS in Kubernetes?

Provides service discovery using service names.

Example:

```text
my-service.default.svc.cluster.local
```

---

## 12. What is a Headless Service?

A Service without a ClusterIP.

Used mainly with StatefulSets.

---

## 13. What is a Network Policy?

Controls traffic flow between Pods.

---

## 14. What is CNI?

Container Network Interface used to implement networking.

Examples:

* Calico
* Flannel
* Cilium

---

## 15. Most Common Networking Interview Question

### How does traffic flow from a user to a Pod?

```text
User
 ↓
Ingress
 ↓
Service
 ↓
Pod
```
