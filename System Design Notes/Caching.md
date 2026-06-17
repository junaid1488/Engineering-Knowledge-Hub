# ⚡ Caching

## 📖 Theory

Caching is a technique used to store frequently accessed data in fast storage so that future requests can be served quickly.

Instead of querying the database every time, data is fetched from the cache.

---

## 🏗 Architecture Diagram

```text
          User
            │
            ▼

      Application

       ┌────┴────┐

       ▼         ▼

   Cache Hit   Cache Miss
       │         │
       ▼         ▼

   Redis      Database
       │         │
       └────┬────┘
            ▼

         Response
```

---

## 💡 Interview Questions

### What is Caching?

Temporary storage of frequently used data.

### Why use Cache?

* Faster Response Time
* Reduced Database Load
* Improved Scalability

### Popular Cache Systems?

* Redis
* Memcached

---

## ⚡ Real-world Example

Netflix stores frequently accessed content metadata in Redis.

---

## 💻 Small Code Example

```python
cache = {}

def get_user(id):

    if id in cache:
        return cache[id]

    data = "Fetched From DB"

    cache[id] = data

    return data
```

---

## 📝 Quick Revision

```text
Purpose → Faster Access

Tools:
✔ Redis
✔ Memcached

Benefits:
✔ Low Latency
✔ Reduced DB Load
✔ High Performance
```
