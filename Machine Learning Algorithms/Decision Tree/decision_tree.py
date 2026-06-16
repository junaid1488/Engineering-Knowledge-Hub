```python
import numpy as np
from collections import Counter

class Node:
    def __init__(
        self,
        feature=None,
        threshold=None,
        left=None,
        right=None,
        value=None
    ):
        self.feature = feature
        self.threshold = threshold
        self.left = left
        self.right = right
        self.value = value


class DecisionTree:

    def __init__(self, max_depth=3):
        self.max_depth = max_depth
        self.root = None

    def fit(self, X, y):
        self.root = self._grow_tree(X, y)

    def predict(self, X):
        return np.array(
            [self._traverse_tree(x, self.root) for x in X]
        )

    def _entropy(self, y):

        hist = np.bincount(y)

        ps = hist / len(y)

        return -np.sum(
            [p * np.log2(p) for p in ps if p > 0]
        )

    def _best_split(self, X, y):

        best_gain = -1

        split_idx = None
        split_thresh = None

        parent_entropy = self._entropy(y)

        n_features = X.shape[1]

        for feature in range(n_features):

            thresholds = np.unique(X[:, feature])

            for threshold in thresholds:

                left_idx = X[:, feature] <= threshold
                right_idx = X[:, feature] > threshold

                if len(y[left_idx]) == 0 or len(y[right_idx]) == 0:
                    continue

                left_entropy = self._entropy(y[left_idx])
                right_entropy = self._entropy(y[right_idx])

                n = len(y)

                child_entropy = (
                    len(y[left_idx]) / n * left_entropy +
                    len(y[right_idx]) / n * right_entropy
                )

                gain = parent_entropy - child_entropy

                if gain > best_gain:
                    best_gain = gain
                    split_idx = feature
                    split_thresh = threshold

        return split_idx, split_thresh

    def _grow_tree(self, X, y, depth=0):

        num_samples = len(y)
        num_labels = len(np.unique(y))

        if (
            depth >= self.max_depth or
            num_labels == 1 or
            num_samples < 2
        ):
            leaf_value = Counter(y).most_common(1)[0][0]
            return Node(value=leaf_value)

        feature, threshold = self._best_split(X, y)

        if feature is None:
            leaf_value = Counter(y).most_common(1)[0][0]
            return Node(value=leaf_value)

        left_idx = X[:, feature] <= threshold
        right_idx = X[:, feature] > threshold

        left = self._grow_tree(
            X[left_idx],
            y[left_idx],
            depth + 1
        )

        right = self._grow_tree(
            X[right_idx],
            y[right_idx],
            depth + 1
        )

        return Node(
            feature,
            threshold,
            left,
            right
        )

    def _traverse_tree(self, x, node):

        if node.value is not None:
            return node.value

        if x[node.feature] <= node.threshold:
            return self._traverse_tree(x, node.left)

        return self._traverse_tree(x, node.right)
```
