# 🪟 Sliding Window Patterns

Sliding Window is one of the most important interview patterns.

Instead of checking every subarray, maintain a window and move it efficiently.

---

# 1️⃣ Fixed Size Window

### Pattern

```text
Window Size = K
```

Move window one step at a time.

### Complexity

```text
Time  : O(n)
Space : O(1)
```

### Examples

* Maximum Average Subarray I
* Maximum Number of Vowels in a Substring
* Sliding Window Maximum

---

# 2️⃣ Variable Size Window

### Pattern

```text
Expand Right
Shrink Left
```

Window size changes dynamically.

### Complexity

```text
Time  : O(n)
Space : O(1)
```

### Examples

* Minimum Size Subarray Sum
* Longest Substring Without Repeating Characters
* Longest Repeating Character Replacement

---

# 3️⃣ Frequency Map Window

### Pattern

Use HashMap / Array Frequency Counter.

### Examples

* Permutation in String
* Find All Anagrams in a String
* Minimum Window Substring

---

# 4️⃣ At Most K Pattern

### Pattern

```text
AtMost(K)
```

Frequently used in advanced problems.

### Examples

* Max Consecutive Ones III
* Subarrays With K Different Integers

---

# 5️⃣ Exact K Pattern

### Formula

```text
Exactly(K)
=
AtMost(K)
-
AtMost(K - 1)
```

### Examples

* Subarrays With K Different Integers

---

# 🎯 Sliding Window Roadmap

```text
Fixed Window
      │
      ▼
Variable Window
      │
      ▼
Frequency Window
      │
      ▼
At Most K
      │
      ▼
Exactly K
```

---

# 🔥 Most Asked Problems

### Easy

* Maximum Average Subarray I
* Maximum Number Of Vowels

### Medium

* Longest Substring Without Repeating Characters
* Minimum Size Subarray Sum
* Longest Repeating Character Replacement
* Permutation In String
* Find All Anagrams In A String

### Hard

* Minimum Window Substring
* Sliding Window Maximum
* Sliding Window Median
* Subarrays With K Different Integers

---

# 🚀 Interview Tip

Whenever you see:

```text
Subarray
Substring
Contiguous
Window Size K
Longest
Shortest
```

Think:

```text
Sliding Window
```
