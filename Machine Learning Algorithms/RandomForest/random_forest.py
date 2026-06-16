```python
import numpy as np
from collections import Counter
from decision_tree import DecisionTree


class RandomForest:

    def __init__(
        self,
        n_trees=10,
        max_depth=5
    ):
        self.n_trees = n_trees
        self.max_depth = max_depth
        self.trees = []

    def fit(self, X, y):

        self.trees = []

        n_samples = X.shape[0]

        for _ in range(self.n_trees):

            indices = np.random.choice(
                n_samples,
                n_samples,
                replace=True
            )

            X_sample = X[indices]
            y_sample = y[indices]

            tree = DecisionTree(
                max_depth=self.max_depth
            )

            tree.fit(X_sample, y_sample)

            self.trees.append(tree)

    def predict(self, X):

        tree_predictions = np.array([
            tree.predict(X)
            for tree in self.trees
        ])

        tree_predictions = np.swapaxes(
            tree_predictions,
            0,
            1
        )

        predictions = []

        for pred in tree_predictions:
            predictions.append(
                Counter(pred).most_common(1)[0][0]
            )

        return np.array(predictions)
```
