# Decision Tree From Scratch using NumPy

## 📖 Theory

Decision Tree is a supervised machine learning algorithm used for:

* Classification
* Regression

It works by recursively splitting the dataset based on the feature that provides the best separation.

Example:

```text
Is Age > 30?
        │
   ┌────┴────┐
   │         │
 Yes        No
   │         │
 Buy      Don't Buy
```

The goal is to create pure leaf nodes containing mostly one class.

---

## 🧮 Mathematical Formula

### Entropy

```text
Entropy(S) = - Σ p(x) log₂ p(x)
```

Measures impurity in a dataset.

### Information Gain

```text
Information Gain = Entropy(Parent) - Weighted Entropy(Children)
```

The feature with the highest Information Gain is selected for splitting.

---

## ⚡ NumPy Implementation

File:

```text
decision_tree.py
```

---

## 🧪 Example Usage

```bash
python example.py
```

Expected Output:

```text
Predictions: [0 1]
```

---

## 📈 Time Complexity

| Operation  | Complexity       |
| ---------- | ---------------- |
| Training   | O(n × m × log n) |
| Prediction | O(log n)         |

Where:

* n = Samples
* m = Features

---

## 🎯 Real-World Applications

* Loan Approval
* Customer Churn Prediction
* Medical Diagnosis
* Fraud Detection
* Recommendation Systems

---

## ✅ Advantages

* Easy to Interpret
* No Feature Scaling Required
* Handles Non-linear Data

---

## ❌ Limitations

* Overfitting
* Unstable with Small Data Changes
* Can Become Very Deep

---

## 📂 Project Structure

```text
DecisionTree/
│
├── README.md
├── decision_tree.py
└── example.py
```
