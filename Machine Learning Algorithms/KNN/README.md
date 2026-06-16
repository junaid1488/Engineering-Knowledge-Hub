# K-Nearest Neighbors (KNN) From Scratch using NumPy

## 📖 Theory

K-Nearest Neighbors (KNN) is a supervised machine learning algorithm used for:

* Classification
* Regression

KNN works by finding the K nearest data points to a new sample and making predictions based on those neighbors.

Example:

If K = 3

```text
Nearest Neighbors:
Class A
Class A
Class B
```

Prediction → Class A

(Majority Vote)

---

## 🧮 Mathematical Formula

### Euclidean Distance

```text
Distance = √Σ(x₁ - x₂)²
```

Used to calculate the similarity between two data points.

---

## ⚡ NumPy Implementation

File:

```text
knn.py
```

---

## 🧪 Example Usage

```bash
python example.py
```

Expected Output:

```text
Predicted Class: [0]
```

---

## 📈 Time Complexity

| Operation  | Complexity |
| ---------- | ---------- |
| Training   | O(1)       |
| Prediction | O(n × d)   |

Where:

* n = Number of Samples
* d = Number of Features

---

## 🎯 Real-World Applications

* Recommendation Systems
* Handwriting Recognition
* Image Classification
* Fraud Detection
* Medical Diagnosis

---

## ✅ Advantages

* Easy to Understand
* No Training Phase
* Effective on Small Datasets

---

## ❌ Limitations

* Slow on Large Datasets
* Sensitive to Noise
* Requires Feature Scaling

---

## 📂 Project Structure

```text
KNN/
│
├── README.md
├── knn.py
└── example.py
```
