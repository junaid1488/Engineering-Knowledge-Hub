# 🔄 Consistent Hashing

## 📖 Theory

Consistent Hashing distributes data across servers while minimizing data movement when servers are added or removed.

Commonly used in:

* Redis Cluster
* Cassandra
* DynamoDB
* CDN Systems

---

## 🏗 Architecture Diagram

```text
              Hash Ring

                 ●
            Server A

      ● Key1           ● Key2

Server D                 Server B

      ● Key4           ● Key3

                 ●
            Server C
```

Keys move only slightly when a server joins or leaves.

---

## 💡 Interview Questions

### What is Consistent Hashing?

A hashing technique that minimizes rehashing.

### Why Not Use Traditional Hashing?

```python
hash(key) % servers
```

Adding a server changes most mappings.

### Main Benefit?

Minimal Data Movement.

---

## ⚡ Real-world Example

Redis Cluster uses Consistent Hashing to distribute keys.

---

## 💻 Small Code Example

```python
servers = 4

user_id = 101

print(hash(str(user_id)) % servers)
```

---

## 📈 Advantages

* Scalability
* Minimal Rebalancing
* Fault Tolerance

---

## ❌ Disadvantages

* Complex Implementation
* Virtual Nodes Needed

---

## 📝 Placement Quick Revision

```text
Purpose:
✔ Data Distribution

Used In:
✔ Redis
✔ Cassandra
✔ DynamoDB

Benefit:
✔ Minimal Rehashing
```
