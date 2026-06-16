# Principal Component Analysis (PCA) From Scratch using NumPy

## 📖 Theory

PCA is an unsupervised dimensionality reduction technique.

It reduces the number of features while preserving maximum information.

Example:

```text
100 Features
     ↓
 PCA
     ↓
10 Features
```

---

## 🧮 Mathematical Formula

### Covariance Matrix

```text
Cov(X)
```

### Eigenvalue Equation

```text
Av = λv
```

Where:

* A = Covariance Matrix
* v = Eigenvector
* λ = Eigenvalue

---

## ⚡ NumPy Implementation

Uses:

* Mean Centering
* Covariance Matrix
* Eigenvalues
* Eigenvectors

---

## 🧪 Example Usage

```bash
python example.py
```

---

## 📈 Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Training  | O(n³)      |
| Transform | O(nd)      |

---

## 🎯 Real-World Applications

* Image Compression
* Face Recognition
* Feature Reduction
* Data Visualization

---

## ✅ Advantages

* Reduces Dimensions
* Removes Redundancy
* Faster Training

---

## ❌ Limitations

* Information Loss
* Hard to Interpret Components
