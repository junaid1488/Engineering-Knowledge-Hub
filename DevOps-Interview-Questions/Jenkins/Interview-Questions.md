# Jenkins Interview Questions

## 1. What is Jenkins?

Jenkins is an open-source automation server used for CI/CD.

---

## 2. What is CI/CD?

### CI (Continuous Integration)

Automatically builds and tests code.

### CD (Continuous Delivery/Deployment)

Automatically delivers or deploys applications.

---

## 3. What is a Jenkins Pipeline?

A pipeline defines the CI/CD workflow as code.

---

## 4. What is a Jenkins Job?

A task or process executed by Jenkins.

---

## 5. What is Jenkinsfile?

A file that defines a Jenkins Pipeline.

---

## 6. Types of Pipelines?

* Declarative Pipeline
* Scripted Pipeline

---

## 7. What is an Agent in Jenkins?

A machine that executes Jenkins jobs.

---

## 8. What is a Master-Agent Architecture?

| Master        | Agent         |
| ------------- | ------------- |
| Controls Jobs | Executes Jobs |

---

## 9. What is a Stage?

A logical section of a pipeline.

Example:

* Build
* Test
* Deploy

---

## 10. What is a Node?

A machine capable of executing Jenkins jobs.

---

## 11. What are Jenkins Plugins?

Extensions that add functionality to Jenkins.

---

## 12. What is Blue Ocean?

Modern UI for Jenkins Pipelines.

---

## 13. What is Webhook?

Automatically triggers Jenkins when code changes are pushed.

---

## 14. How Does Jenkins Integrate with Git?

Using:

* Git Plugin
* Webhooks

---

## 15. What is a Build Trigger?

Automatically starts a job based on an event.

---

## 16. What is Pipeline as Code?

Defining CI/CD pipelines using a Jenkinsfile.

---

## 17. What are Environment Variables?

Variables available during pipeline execution.

---

## 18. What is Artifact Management?

Storing build outputs for later use.

---

## 19. What is a Shared Library?

Reusable pipeline code shared across projects.

---

## 20. Most Asked Interview Question

### Jenkins CI/CD Workflow

```text
Developer
    ↓
Git Push
    ↓
Webhook
    ↓
Jenkins
    ↓
Build
    ↓
Test
    ↓
Deploy
```
