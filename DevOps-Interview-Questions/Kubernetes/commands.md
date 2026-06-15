# Kubernetes Commands Cheat Sheet

## Cluster Commands

```bash
kubectl cluster-info
kubectl version
kubectl config view
kubectl config current-context
kubectl get componentstatuses
```

---

## Node Commands

```bash
kubectl get nodes
kubectl describe node <node-name>
kubectl cordon <node-name>
kubectl uncordon <node-name>
kubectl drain <node-name>
```

---

## Pod Commands

```bash
kubectl get pods
kubectl get pods -A
kubectl get pods -o wide
kubectl describe pod <pod-name>
kubectl delete pod <pod-name>
```

---

## Logs & Debugging

```bash
kubectl logs <pod-name>
kubectl logs -f <pod-name>
kubectl logs <pod-name> -c <container-name>
kubectl exec -it <pod-name> -- bash
kubectl exec -it <pod-name> -- sh
```

---

## Deployment Commands

```bash
kubectl get deployments
kubectl describe deployment <deployment-name>
kubectl create deployment nginx --image=nginx
kubectl scale deployment nginx --replicas=3
kubectl rollout restart deployment nginx
```

---

## Rollout Commands

```bash
kubectl rollout status deployment nginx
kubectl rollout history deployment nginx
kubectl rollout undo deployment nginx
kubectl set image deployment/nginx nginx=nginx:latest
kubectl rollout restart deployment/nginx
```

---

## Service Commands

```bash
kubectl get svc
kubectl describe svc <service-name>
kubectl expose deployment nginx --port=80
kubectl get endpoints
kubectl delete svc <service-name>
```

---

## Namespace Commands

```bash
kubectl get namespaces
kubectl create namespace dev
kubectl delete namespace dev
kubectl config set-context --current --namespace=dev
kubectl get all -n dev
```

---

## YAML Commands

```bash
kubectl apply -f app.yaml
kubectl create -f app.yaml
kubectl replace -f app.yaml
kubectl edit deployment nginx
kubectl delete -f app.yaml
```

---

## ConfigMap & Secret Commands

```bash
kubectl get configmaps
kubectl create configmap app-config --from-file=config.properties
kubectl get secrets
kubectl create secret generic db-secret --from-literal=password=123
kubectl describe secret db-secret
```

---

## Storage Commands

```bash
kubectl get pv
kubectl get pvc
kubectl describe pv <pv-name>
kubectl describe pvc <pvc-name>
kubectl delete pvc <pvc-name>
```

---

## Monitoring Commands

```bash
kubectl top nodes
kubectl top pods
kubectl get events
kubectl get all
kubectl describe pod <pod-name>
```

---

## Top 15 Interview Commands

```bash
kubectl get pods
kubectl get nodes
kubectl get svc
kubectl get deployments
kubectl describe pod <pod-name>
kubectl logs <pod-name>
kubectl exec -it <pod-name> -- bash
kubectl apply -f app.yaml
kubectl delete pod <pod-name>
kubectl scale deployment app --replicas=3
kubectl rollout undo deployment app
kubectl get pvc
kubectl get pv
kubectl top pods
kubectl get events
```

## Interview Tip

If you remember only these commands, you can handle most Kubernetes fresher and junior DevOps interview practical questions:

```bash
kubectl get pods
kubectl describe pod
kubectl logs
kubectl exec
kubectl apply -f
kubectl get svc
kubectl get nodes
kubectl scale deployment
kubectl rollout undo
kubectl top pods
```
