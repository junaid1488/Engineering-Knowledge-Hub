# 📚 Database Indexing

## 📖 Theory

An Index is a data structure that improves the speed of data retrieval operations.

Without Index:

```text
Find User
     │
     ▼

Scan Every Row
```

With Index:

```text
Find User
     │
     ▼

Direct Lookup
```

---

## 🏗 Architecture Diagram

```text
          Query

            │

            ▼

      Database Index

            │

            ▼

         Data Row
```

---

## 💡 Interview Questions

### What is Indexing?

A technique used to speed up database queries.

### Why Use Index?

To avoid full table scans.

### Types of Indexes?

* Primary Index
* Secondary Index
* Composite Index

### Disadvantage?

Indexes consume extra storage.

---

## ⚡ Real-world Example

Searching users by email.

Without Index:

```text
O(n)
```

With Index:

```text
O(log n)
```

---

## 💻 Small Code Example

```sql
CREATE INDEX idx_email
ON users(email);
```

Query:

```sql
SELECT *
FROM users
WHERE email='test@gmail.com';
```

---

## 📈 Advantages

* Faster Queries
* Reduced Search Time
* Better Performance

---

## ❌ Disadvantages

* Extra Storage
* Slower Writes

---

## 📝 Placement Quick Revision

```text
Purpose:
✔ Faster Queries

Types:
✔ Primary
✔ Secondary
✔ Composite

Benefit:
✔ Avoid Full Table Scan
```
