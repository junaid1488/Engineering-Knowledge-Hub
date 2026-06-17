# 🏗️ Microservices

## 📖 Theory

Microservices is an architecture where an application is divided into small independent services.

Each service handles a specific business function.

---

## 🏗 Architecture Diagram

```text
                Users
                   │
                   ▼

              API Gateway

      ┌────────┼────────┐

      ▼        ▼        ▼

 User Service

 Order Service

 Payment Service

      ▼        ▼        ▼

     DB1      DB2      DB3
```

---

## 💡 Interview Questions

### What are Microservices?

Small independently deployable services.

### Advantages?

* Independent Deployment
* Better Scalability
* Fault Isolation

### Disadvantages?

* Complex Monitoring
* Network Overhead

### Microservices vs Monolith?

| Monolith     | Microservices     |
| ------------ | ----------------- |
| Single App   | Multiple Services |
| Hard Scaling | Easy Scaling      |

---

## ⚡ Real-world Example

Amazon migrated from a monolithic architecture to microservices.

---

## 💻 Small Code Example

```yaml
services:

  user-service:

  order-service:

  payment-service:
```

---

## 📝 Quick Revision

```text
Purpose → Modular Architecture

Benefits:
✔ Independent Deployment
✔ Scalability
✔ Fault Isolation

Examples:
✔ Amazon
✔ Netflix
✔ Uber
```
