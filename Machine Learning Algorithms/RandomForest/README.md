# Random Forest From Scratch using NumPy

## 📖 Theory

Random Forest is an ensemble learning algorithm that combines multiple Decision Trees to improve prediction accuracy and reduce overfitting.

Instead of relying on a single tree, Random Forest trains many trees on different random subsets of the data and uses majority voting for classification.

Example:

```text
Tree 1 → Class 1
Tree 2 → Class 1
Tree 3 → Class 0
Tree 4 → Class 1
Tree 5 → Class 1

Final Prediction → Class 1
```

---

## 🧮 Mathematical Formula

### Majority Voting

```text
Prediction = Mode(Tree₁, Tree₂, Tree₃, ... Treeₙ)
```

For classification, the most frequent prediction among all trees becomes the final prediction.

---

## ⚡ NumPy Implementation

File:

```text
random_forest.py
```

Uses:

* Bootstrap Sampling
* Multiple Decision Trees
* Majority Voting

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

| Operation  | Complexity           |
| ---------- | -------------------- |
| Training   | O(t × n × m × log n) |
| Prediction | O(t × log n)         |

Where:

* t = Number of Trees
* n = Number of Samples
* m = Number of Features

---

## 🎯 Real-World Applications

* Fraud Detection
* Medical Diagnosis
* Customer Churn Prediction
* Credit Risk Analysis
* Recommendation Systems

---

## ✅ Advantages

* Reduces Overfitting
* High Accuracy
* Handles Large Datasets
* Robust to Noise

---

## ❌ Limitations

* Slower than a Single Tree
* More Memory Usage
* Less Interpretable

---

## 📂 Project Structure

```text
RandomForest/
│
├── README.md
├── random_forest.py
└── example.py
```
