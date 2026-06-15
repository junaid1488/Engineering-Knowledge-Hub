# CI/CD Troubleshooting Interview Questions

## 1. Pipeline Failed. What Will You Check?

* Build Logs
* Test Results
* Configuration Files

---

## 2. Jenkins Job Not Triggering?

Check:

* Webhook
* Jenkins Service
* Git Integration

---

## 3. GitHub Actions Workflow Not Running?

Verify:

* YAML Syntax
* Trigger Events
* Repository Permissions

---

## 4. Build Failed?

Check:

* Dependencies
* Compilation Errors
* Environment Variables

---

## 5. Tests Failing?

Review:

* Test Logs
* Test Cases
* Environment Configuration

---

## 6. Docker Build Failing?

Check:

* Dockerfile
* Build Context
* Image Dependencies

---

## 7. Docker Container Not Starting?

Check:

```bash
docker logs <container_id>
```

---

## 8. Kubernetes Deployment Failed?

Check:

```bash
kubectl describe pod <pod-name>
kubectl logs <pod-name>
```

---

## 9. Rollout Stuck?

Check:

```bash
kubectl rollout status deployment app
```

---

## 10. Artifact Not Generated?

Verify:

* Build Stage
* Artifact Path
* Permissions

---

## 11. Deployment Failed?

Check:

* Credentials
* Server Access
* Deployment Scripts

---

## 12. Webhook Not Working?

Verify:

* Webhook URL
* Network Access
* Event Configuration

---

## 13. Permission Denied Error?

Check:

* IAM Roles
* SSH Keys
* Access Tokens

---

## 14. Environment Variables Missing?

Verify:

* Secret Configuration
* Pipeline Variables

---

## 15. Most Asked Interview Question

### CI/CD Troubleshooting Workflow

1. Check Logs
2. Identify Failed Stage
3. Verify Credentials
4. Verify Configuration
5. Re-run Pipeline
6. Validate Deployment

Tools Commonly Used:

* Git
* Jenkins
* Docker
* Kubernetes
* GitHub Actions
