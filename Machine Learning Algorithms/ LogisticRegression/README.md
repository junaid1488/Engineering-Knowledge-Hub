# Logistic Regression From Scratch using NumPy

## 📖 Theory

Logistic Regression is a supervised machine learning algorithm used for binary classification problems.

Examples:

* Spam Detection
* Disease Prediction
* Fraud Detection
* Customer Churn Prediction

Unlike Linear Regression, Logistic Regression predicts probabilities between 0 and 1.

---

## 🧮 Mathematical Formula

### Sigmoid Function

The sigmoid function converts any value into a probability between 0 and 1.

### Prediction Rule

```text
if p >= 0.5:
    class = 1
else:
    class = 0
```

---

## ⚡ NumPy Implementation

File:

```text
logistic_regression.py
```

---

## 🧪 Example Usage

```bash
python example.py
```

Expected Output:

```text
Predicted Class: [1]
```

---

## 📈 Time Complexity

| Operation  | Complexity    |
| ---------- | ------------- |
| Training   | O(n × epochs) |
| Prediction | O(n)          |

---

## 🎯 Real-World Applications

* Spam Detection
* Credit Card Fraud Detection
* Medical Diagnosis
* Customer Churn Prediction
* Sentiment Analysis

---

## ✅ Advantages

* Simple and Fast
* Easy to Interpret
* Works Well for Binary Classification

---

## ❌ Limitations

* Assumes Linear Decision Boundary
* Not Suitable for Complex Data
* Sensitive to Outliers

---

## 📂 Project Structure

```text
LogisticRegression/
│
├── README.md
├── logistic_regression.py
└── example.py
```
