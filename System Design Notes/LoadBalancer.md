# ⚖️ Load Balancer

## 📖 Theory

A Load Balancer is a system that distributes incoming network traffic across multiple servers.

Its primary goal is to:

* Improve Availability
* Improve Scalability
* Prevent Server Overload
* Increase Fault Tolerance

Without a Load Balancer, all traffic reaches a single server.

If that server crashes, the application becomes unavailable.

---

## 🎯 Why Do We Need a Load Balancer?

### Problem

```text
                Users
                   │
                   ▼
            ┌───────────┐
            │ Server 1  │
            └───────────┘

      ❌ High Traffic
      ❌ Slow Response
      ❌ Single Point of Failure
```

---

### Solution

```text
                     Users
                        │
                        ▼

                ┌──────────────┐
                │ Load Balancer│
                └──────┬───────┘
                       │
        ┌──────────────┼──────────────┐
        │              │              │
        ▼              ▼              ▼

   ┌────────┐     ┌────────┐     ┌────────┐
   │Server 1│     │Server 2│     │Server 3│
   └────────┘     └────────┘     └────────┘
```

The Load Balancer distributes requests among all available servers.

---

## 🏗 Architecture Diagram

### High-Level Architecture

```text
              Internet
                   │
                   ▼

          ┌────────────────┐
          │ Load Balancer  │
          └───────┬────────┘
                  │

        ┌─────────┼─────────┐
        │         │         │

        ▼         ▼         ▼

   Application Application Application
     Server1      Server2      Server3

        │         │         │
        └────┬────┴────┬────┘
             │         │

             ▼         ▼

          Database Cluster
```

---

## ⚙️ Types of Load Balancers

### 1. Layer 4 Load Balancer

Works on:

* TCP
* UDP

Examples:

* AWS NLB
* HAProxy

---

### 2. Layer 7 Load Balancer

Works on:

* HTTP
* HTTPS

Examples:

* Nginx
* AWS ALB

---

## 🔄 Load Balancing Algorithms

### Round Robin

```text
Request 1 → Server 1
Request 2 → Server 2
Request 3 → Server 3
Request 4 → Server 1
```

---

### Least Connections

Traffic goes to the server with the fewest active connections.

---

### IP Hash

```text
Client IP
    ↓
 Hash Function
    ↓
 Specific Server
```

Used to maintain session consistency.

---

## 📈 Advantages

* High Availability
* Better Performance
* Horizontal Scaling
* Fault Tolerance
* Reduced Downtime

---

## ❌ Disadvantages

* Additional Infrastructure Cost
* Configuration Complexity
* Possible Single Point of Failure (without redundancy)

---

## 💡 Interview Questions

### 1. What is a Load Balancer?

A Load Balancer distributes incoming requests among multiple servers.

---

### 2. Why is a Load Balancer Needed?

To improve scalability, availability, and reliability.

---

### 3. Difference Between Layer 4 and Layer 7 Load Balancer?

| Layer 4       | Layer 7           |
| ------------- | ----------------- |
| TCP/UDP       | HTTP/HTTPS        |
| Faster        | More Intelligent  |
| Network Layer | Application Layer |

---

### 4. What Happens if One Server Fails?

The Load Balancer removes the failed server and routes traffic to healthy servers.

---

### 5. What is Health Check?

A mechanism used to determine whether a server is healthy.

Example:

```text
GET /health
```

---

### 6. What is Sticky Session?

A technique where the same client is always routed to the same server.

---

### 7. Name Popular Load Balancers.

* Nginx
* HAProxy
* AWS ALB
* AWS NLB
* F5

---

## 🚀 Real-World Examples

### Netflix

```text
Users
  ↓
Load Balancer
  ↓
Thousands of Servers
```

---

### Amazon

```text
Customers
   ↓
AWS Load Balancer
   ↓
EC2 Instances
```

---

### YouTube

```text
Millions of Users
        ↓
 Load Balancers
        ↓
 Video Servers
```

---

## 💻 Small Code Example

### Nginx Load Balancer Configuration

```nginx
upstream backend {

    server app1:8080;
    server app2:8080;
    server app3:8080;

}

server {

    listen 80;

    location / {

        proxy_pass http://backend;

    }
}
```

### How It Works

```text
User Request
      ↓
Nginx Load Balancer
      ↓
Backend Servers

app1
app2
app3
```

The request is automatically distributed among the available servers.

---

## 📝 Placement Quick Revision

```text
Load Balancer

Purpose:
✔ Distribute Traffic

Benefits:
✔ Scalability
✔ Availability
✔ Reliability

Algorithms:
✔ Round Robin
✔ Least Connections
✔ IP Hash

Types:
✔ Layer 4
✔ Layer 7

Popular Tools:
✔ Nginx
✔ HAProxy
✔ AWS ALB
✔ AWS NLB
```
