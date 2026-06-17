# 🚦 Rate Limiting

## 📖 Theory

Rate Limiting controls how many requests a user can make within a specific time period.

It protects systems from:

* Abuse
* DDoS Attacks
* API Misuse
* Excessive Traffic

---

## 🏗 Architecture Diagram

```text
               User
                 │
                 ▼

          Rate Limiter

          ┌──────┴──────┐

          ▼             ▼

      Allowed      Blocked
```

---

## 🎯 Why Do We Need Rate Limiting?

* Prevent Abuse
* Improve Availability
* Protect Backend Systems
* Fair Resource Usage

---

## ⚙️ Rate Limiting Algorithms

### Fixed Window

```text
100 Requests / Minute
```

Counter resets every minute.

---

### Sliding Window

Tracks requests continuously over time.

---

### Token Bucket

```text
Bucket = 100 Tokens

Request → Consume Token
```

Allows controlled bursts.

---

### Leaky Bucket

Processes requests at a fixed rate.

---

## 💡 Interview Questions

### What is Rate Limiting?

Restricting the number of requests a client can make.

---

### Why is Rate Limiting Important?

Prevents system overload and abuse.

---

### Difference Between Rate Limiting and Throttling?

| Rate Limiting      | Throttling       |
| ------------------ | ---------------- |
| Restricts Requests | Slows Requests   |
| Hard Limit         | Controlled Speed |

---

### Which Algorithm is Most Popular?

Token Bucket.

---

### What HTTP Status Code is Returned?

```text
429 Too Many Requests
```

---

## ⚡ Real-world Example

### GitHub API

```text
Unauthenticated Users

60 Requests / Hour
```

After the limit:

```text
HTTP 429
```

---

## 💻 Small Code Example

```python
requests = {}

LIMIT = 5

def allow_request(user):

    requests[user] = requests.get(user, 0) + 1

    return requests[user] <= LIMIT


for i in range(7):
    print(
        allow_request("juned")
    )
```

Output:

```text
True
True
True
True
True
False
False
```

---

## 📈 Advantages

* Protects APIs
* Prevents Abuse
* Improves Stability
* Fair Usage

---

## ❌ Disadvantages

* Additional Infrastructure
* Configuration Complexity

---

## 📝 Placement Quick Revision

```text
Purpose:
✔ API Protection

Algorithms:
✔ Fixed Window
✔ Sliding Window
✔ Token Bucket
✔ Leaky Bucket

Status Code:
✔ 429 Too Many Requests

Examples:
✔ GitHub API
✔ Twitter API
✔ Stripe API
```
