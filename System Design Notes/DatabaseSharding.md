# 🗄️ Database Sharding

## 📖 Theory

Sharding is a technique of splitting a large database into smaller databases called shards.

Each shard contains part of the data.

---

## 🏗 Architecture Diagram

```text
               Users
                  │
                  ▼

          Application

                  │

        ┌─────────┼─────────┐

        ▼         ▼         ▼

    Shard 1   Shard 2   Shard 3

   User 1-1k User 1k-2k User 2k-3k
```

---

## 💡 Interview Questions

### What is Sharding?

Partitioning a database into multiple smaller databases.

### Why Use Sharding?

* Horizontal Scaling
* Improved Performance
* Better Availability

### Difference Between Sharding and Replication?

| Sharding    | Replication       |
| ----------- | ----------------- |
| Splits Data | Copies Data       |
| Scaling     | High Availability |

---

## ⚡ Real-world Example

Instagram uses database sharding to handle billions of users.

---

## 💻 Small Code Example

```python
def get_shard(user_id):

    return user_id % 4

print(get_shard(105))
```

Output:

```text
1
```

---

## 📝 Quick Revision

```text
Purpose → Horizontal Scaling

Benefits:
✔ Faster Queries
✔ Large Data Handling

Challenges:
✔ Complex Joins
✔ Rebalancing
```
