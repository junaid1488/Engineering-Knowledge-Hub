# 🔍 Binary Search Patterns

Binary Search is used when the search space is sorted or can be converted into a monotonic condition.

---

# 1️⃣ Classic Binary Search

### Pattern

```text
low ← search → high
```

### Complexity

```text
Time  : O(log n)
Space : O(1)
```

### Examples

* Binary Search
* Search Insert Position

---

# 2️⃣ First / Last Occurrence

### Pattern

```text
Find Left Boundary
Find Right Boundary
```

### Examples

* First Occurrence
* Last Occurrence
* Search Range

---

# 3️⃣ Binary Search on Answer

### Pattern

```text
Can we achieve X?

YES → try smaller/bigger
NO  → move opposite
```

### Examples

* Koko Eating Bananas
* Ship Packages Within D Days
* Split Array Largest Sum

---

# 4️⃣ Rotated Sorted Array

### Pattern

```text
One half always sorted
```

### Examples

* Search in Rotated Sorted Array
* Find Minimum in Rotated Array

---

# 5️⃣ Peak Finding

### Pattern

```text
nums[mid]
vs
nums[mid+1]
```

### Examples

* Find Peak Element

---

# 6️⃣ Partition Binary Search

### Pattern

```text
Partition Left
Partition Right
```

### Examples

* Median of Two Sorted Arrays

---

# 🎯 Binary Search Roadmap

```text
Classic Search
      │
      ▼
Boundaries
      │
      ▼
Rotated Array
      │
      ▼
Peak Finding
      │
      ▼
Binary Search On Answer
      │
      ▼
Partition Search
```

---

# 🔥 Most Asked Problems

### Easy

* Binary Search
* Search Insert Position
* Sqrt(x)

### Medium

* Search in Rotated Sorted Array
* Find Peak Element
* Koko Eating Bananas
* Ship Packages Within D Days

### Hard

* Median of Two Sorted Arrays
* Split Array Largest Sum

---

# 🚀 Interview Tip

Whenever you see:

```text
Sorted
Minimum Possible
Maximum Possible
K-th Element
Peak
Rotated Array
```

Think:

```text
Binary Search
```
