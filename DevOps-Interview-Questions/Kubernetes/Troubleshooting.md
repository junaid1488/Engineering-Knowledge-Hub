# Kubernetes Troubleshooting Interview Questions

## 1. Pod Stuck in Pending State?

Check:

```bash
kubectl describe pod <pod-name>
```

Common Causes:

* No resources
* PVC issues
* Scheduling problems

---

## 2. What is CrashLoopBackOff?

A container repeatedly crashes and Kubernetes keeps restarting it.

---

## 3. How to Troubleshoot CrashLoopBackOff?

```bash
kubectl logs <pod-name>
kubectl describe pod <pod-name>
```

---

## 4. Pod Not Starting?

Check:

* Image name
* Resources
* Events
* Logs

---

## 5. ImagePullBackOff Error?

Causes:

* Wrong image
* Private registry access issue

---

## 6. How to Check Pod Logs?

```bash
kubectl logs <pod-name>
```

---

## 7. How to Access a Running Pod?

```bash
kubectl exec -it <pod-name> -- bash
```

---

## 8. Service Not Working?

Verify:

* Service selector
* Endpoints
* Pod status

```bash
kubectl get svc
kubectl get endpoints
```

---

## 9. Pods Cannot Communicate?

Check:

* Network Policy
* Service configuration
* DNS

---

## 10. PVC Stuck in Pending?

Check:

```bash
kubectl get pvc
kubectl describe pvc <pvc-name>
```

---

## 11. Node Not Ready?

Check:

```bash
kubectl get nodes
kubectl describe node <node-name>
```

---

## 12. How to Check Cluster Events?

```bash
kubectl get events
```

---

## 13. Deployment Not Updating?

Check rollout status:

```bash
kubectl rollout status deployment <deployment-name>
```

Rollback:

```bash
kubectl rollout undo deployment <deployment-name>
```

---

## 14. High CPU or Memory Usage?

Check:

```bash
kubectl top pods
kubectl top nodes
```

---

## 15. Most Asked Troubleshooting Question

### What is your Kubernetes troubleshooting workflow?

1. Check Pod Status
2. Check Events
3. Check Logs
4. Describe Resource
5. Verify Service
6. Verify Network
7. Verify Storage
8. Check Node Health

Commands:

```bash
kubectl get pods
kubectl describe pod <pod>
kubectl logs <pod>
kubectl get svc
kubectl get events
kubectl get nodes
```
