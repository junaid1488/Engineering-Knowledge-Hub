# Support Vector Machine (SVM) From Scratch using NumPy

## 📖 Theory

SVM is a supervised learning algorithm used for classification.

The goal is to find the optimal hyperplane that separates classes.

Example:

```text
Class A ● ● ●

------------- Hyperplane -------------

Class B ▲ ▲ ▲
```

---

## 🧮 Mathematical Formula

### Decision Function

```text
f(x) = w·x + b
```

Prediction:

```text
sign(f(x))
```

---

## ⚡ NumPy Implementation

Uses:

* Linear Hyperplane
* Gradient Descent
* Margin Maximization

---

## 🧪 Example Usage

```bash
python example.py
```

Expected Output:

```text
Predictions: [-1 1]
```

---

## 📈 Time Complexity

| Operation  | Complexity |
| ---------- | ---------- |
| Training   | O(n²)      |
| Prediction | O(d)       |

---

## 🎯 Real-World Applications

* Face Recognition
* Text Classification
* Spam Detection
* Bioinformatics

---

## ✅ Advantages

* Effective in High Dimensions
* Robust Classification
* Works Well on Small Datasets

---

## ❌ Limitations

* Slow on Large Datasets
* Kernel Selection Required
* Difficult to Interpret
