# 🔺 CAP Theorem

## 📖 Theory

CAP Theorem states that a distributed system can provide only two of the following three guarantees:

* Consistency (C)
* Availability (A)
* Partition Tolerance (P)

---

## 🏗 Architecture Diagram

```text
              Consistency
                    ▲
                   / \
                  /   \
                 /     \
                /       \
               /         \
              /           \
 Availability -------- Partition
```

---

## 💡 Interview Questions

### What is CAP Theorem?

A distributed system can only guarantee two of C, A, and P.

### What is Consistency?

All nodes return the same data.

### What is Availability?

Every request gets a response.

### What is Partition Tolerance?

System survives network failures.

### Which Property is Mandatory?

Partition Tolerance.

---

## ⚡ Real-world Example

### Banking

Prioritizes:

```text
Consistency + Partition Tolerance
```

### Social Media

Prioritizes:

```text
Availability + Partition Tolerance
```

---

## 💻 Small Code Example

```python
balance = 1000

balance -= 100

print(balance)
```

Shows importance of consistent state.

---

## 📈 Advantages

* Helps Design Distributed Systems
* Explains Database Trade-offs

---

## ❌ Disadvantages

* Cannot Achieve All Three Together

---

## 📝 Placement Quick Revision

```text
CAP:

C → Consistency
A → Availability
P → Partition Tolerance

Choose Any Two:

CP → HBase
AP → Cassandra
```
