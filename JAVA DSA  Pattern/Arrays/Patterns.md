# 🧠 Arrays Patterns

This file contains the most important array patterns frequently asked in coding interviews and LeetCode.

---

# 1️⃣ Traversal

### Idea

Visit every element once.

### Complexity

```text
Time  : O(n)
Space : O(1)
```

### Examples

* Maximum Element
* Minimum Element
* Linear Search

---

# 2️⃣ Prefix Sum

### Idea

Store cumulative sums to answer range queries efficiently.

### Formula

```text
prefix[i] = prefix[i - 1] + nums[i]
```

### Complexity

```text
Time  : O(n)
Space : O(n)
```

### Examples

* Range Sum Query
* Subarray Sum Equals K
* Continuous Subarray Sum

---

# 3️⃣ Hashing

### Idea

Store frequencies or visited elements.

### Complexity

```text
Time  : O(n)
Space : O(n)
```

### Examples

* Two Sum
* Contains Duplicate
* Majority Element

---

# 4️⃣ Kadane's Algorithm

### Idea

Find Maximum Subarray Sum.

### Formula

```text
currentSum = max(num, currentSum + num)
```

### Complexity

```text
Time  : O(n)
Space : O(1)
```

### Examples

* Maximum Subarray

---

# 5️⃣ Two Pointers

### Idea

Use two indices moving towards each other.

### Complexity

```text
Time  : O(n)
Space : O(1)
```

### Examples

* Two Sum II
* Container With Most Water
* 3Sum

---

# 6️⃣ Sliding Window

### Idea

Maintain a window and expand/shrink dynamically.

### Complexity

```text
Time  : O(n)
Space : O(1)
```

### Examples

* Maximum Average Subarray
* Longest Substring Without Repeating Characters
* Sliding Window Maximum

---

# 7️⃣ Binary Search on Arrays

### Idea

Search in sorted arrays.

### Complexity

```text
Time  : O(log n)
Space : O(1)
```

### Examples

* Binary Search
* Search Insert Position
* Find Peak Element

---

# 8️⃣ Monotonic Stack

### Idea

Maintain increasing/decreasing order.

### Complexity

```text
Time  : O(n)
Space : O(n)
```

### Examples

* Next Greater Element
* Daily Temperatures
* Largest Rectangle in Histogram

---

# 9️⃣ Merge Intervals

### Idea

Sort intervals and merge overlaps.

### Complexity

```text
Time  : O(n log n)
Space : O(n)
```

### Examples

* Merge Intervals
* Insert Interval

---

# 🔟 Cyclic Sort

### Idea

Place each element at its correct index.

### Complexity

```text
Time  : O(n)
Space : O(1)
```

### Examples

* First Missing Positive
* Find Duplicate Number
* Missing Number

---

# 🎯 Arrays Interview Roadmap

```text
Arrays
│
├── Traversal
├── Prefix Sum
├── Hashing
├── Kadane
├── Two Pointers
├── Sliding Window
├── Binary Search
├── Monotonic Stack
├── Merge Intervals
└── Cyclic Sort
```

---

# 🔥 Most Asked Array Problems

### Easy

* Two Sum
* Best Time To Buy And Sell Stock
* Majority Element
* Contains Duplicate

### Medium

* 3Sum
* Maximum Subarray
* Product Of Array Except Self
* Subarray Sum Equals K
* Find The Duplicate Number

### Hard

* First Missing Positive
* Trapping Rain Water
* Sliding Window Maximum
* Reverse Pairs

---

# 🚀 Goal

Master these patterns before moving to:

```text
Sliding Window
↓
Two Pointers
↓
Binary Search
↓
Trees
↓
Graphs
↓
Dynamic Programming
```
