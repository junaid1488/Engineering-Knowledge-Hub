# K-Means Clustering From Scratch using NumPy

## 📖 Theory

K-Means is an unsupervised machine learning algorithm used to group similar data points into K clusters.

The algorithm works by:

1. Selecting K centroids
2. Assigning each point to the nearest centroid
3. Updating centroids
4. Repeating until convergence

Example:

```text
Cluster 1 ● ● ●

Cluster 2 ▲ ▲ ▲

Cluster 3 ■ ■ ■
```

---

## 🧮 Mathematical Formula

### Euclidean Distance

```text
Distance = √Σ(x₁ - x₂)²
```

Used to measure similarity between points and centroids.

### Centroid Update

```text
Centroid = Mean(All Points in Cluster)
```

---

## ⚡ NumPy Implementation

File:

```text
kmeans.py
```

Uses:

* Euclidean Distance
* Centroid Update
* Iterative Optimization

---

## 🧪 Example Usage

```bash
python example.py
```

Expected Output:

```text
Cluster Labels:
[0 0 0 1 1 1]
```

---

## 📈 Time Complexity

| Operation  | Complexity   |
| ---------- | ------------ |
| Training   | O(n × k × i) |
| Prediction | O(n × k)     |

Where:

* n = Number of Samples
* k = Number of Clusters
* i = Number of Iterations

---

## 🎯 Real-World Applications

* Customer Segmentation
* Market Basket Analysis
* Image Compression
* Document Clustering
* Recommendation Systems

---

## ✅ Advantages

* Simple and Fast
* Easy to Implement
* Scales Well

---

## ❌ Limitations

* Need to Choose K
* Sensitive to Initialization
* Sensitive to Outliers

---

## 📂 Project Structure

```text
KMeans/
│
├── README.md
├── kmeans.py
└── example.py
```
