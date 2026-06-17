# 📬 Message Queues

## 📖 Theory

A Message Queue is a communication mechanism that allows services to exchange messages asynchronously.

Instead of direct communication, messages are placed in a queue and processed later.

This helps build scalable and fault-tolerant systems.

---

## 🏗 Architecture Diagram

```text
                Producer
                    │
                    ▼

           ┌────────────────┐
           │ Message Queue  │
           └───────┬────────┘
                   │

         ┌─────────┼─────────┐

         ▼                   ▼

   Consumer 1          Consumer 2
```

---

## 🎯 Why Do We Need Message Queues?

* Decouple Services
* Handle Traffic Spikes
* Improve Reliability
* Enable Asynchronous Processing

---

## ⚙️ Popular Message Queues

* RabbitMQ
* Apache Kafka
* AWS SQS
* ActiveMQ

---

## 💡 Interview Questions

### What is a Message Queue?

A system that stores messages temporarily and delivers them to consumers.

---

### Producer vs Consumer?

| Producer       | Consumer          |
| -------------- | ----------------- |
| Sends Messages | Receives Messages |

---

### Why Use Kafka?

* High Throughput
* Distributed
* Fault Tolerant

---

### Difference Between Queue and Pub/Sub?

| Queue             | Pub/Sub            |
| ----------------- | ------------------ |
| One Consumer      | Multiple Consumers |
| Work Distribution | Event Broadcasting |

---

### What Happens if Consumer is Down?

Messages remain in the queue until consumed.

---

## ⚡ Real-world Example

### Amazon Order Processing

```text
Order Service
      │
      ▼

 Message Queue

      │
      ▼

 Email Service

 Payment Service

 Inventory Service
```

All services process independently.

---

## 💻 Small Code Example

```python
from queue import Queue

q = Queue()

q.put("Order Created")

message = q.get()

print(message)
```

Output:

```text
Order Created
```

---

## 📈 Advantages

* Scalability
* Reliability
* Fault Tolerance
* Asynchronous Processing

---

## ❌ Disadvantages

* Increased Complexity
* Message Ordering Issues
* Monitoring Required

---

## 📝 Placement Quick Revision

```text
Purpose:
✔ Asynchronous Communication

Popular Tools:
✔ Kafka
✔ RabbitMQ
✔ SQS

Benefits:
✔ Reliability
✔ Scalability
✔ Decoupling

Examples:
✔ Amazon
✔ Uber
✔ Netflix
```
