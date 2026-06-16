# Naive Bayes From Scratch using NumPy

## 📖 Theory

Naive Bayes is a supervised machine learning algorithm based on probability and Bayes' Theorem.

It is mainly used for:

* Spam Detection
* Sentiment Analysis
* Text Classification
* Medical Diagnosis

The algorithm assumes that all features are independent of each other.

Example:

```text
Email
 │
 ├── Contains "Free"
 ├── Contains "Offer"
 └── Contains "Prize"

Prediction → Spam
```

---

## 🧮 Mathematical Formula

### Bayes Theorem

Where:

* P(A|B) = Posterior Probability
* P(B|A) = Likelihood
* P(A) = Prior Probability
* P(B) = Evidence

---

## ⚡ NumPy Implementation

File:

```text
naive_bayes.py
```

Uses:

* Bayes Theorem
* Gaussian Distribution
* Probability Estimation

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

| Operation  | Complexity |
| ---------- | ---------- |
| Training   | O(n × d)   |
| Prediction | O(c × d)   |

Where:

* n = Samples
* d = Features
* c = Classes

---

## 🎯 Real-World Applications

* Spam Email Detection
* News Classification
* Sentiment Analysis
* Disease Prediction
* Recommendation Systems

---

## ✅ Advantages

* Fast Training
* Works Well with Small Data
* Effective for Text Classification
* Easy to Implement

---

## ❌ Limitations

* Assumes Feature Independence
* Performance Drops with Correlated Features
* Less Accurate than Complex Models

---

## 📂 Project Structure

```text
NaiveBayes/
│
├── README.md
├── naive_bayes.py
└── example.py
```
