```python
import numpy as np


class NaiveBayes:

    def fit(self, X, y):

        n_samples, n_features = X.shape

        self.classes = np.unique(y)

        n_classes = len(self.classes)

        self.mean = np.zeros(
            (n_classes, n_features)
        )

        self.var = np.zeros(
            (n_classes, n_features)
        )

        self.priors = np.zeros(
            n_classes
        )

        for idx, c in enumerate(self.classes):

            X_c = X[y == c]

            self.mean[idx, :] = np.mean(
                X_c,
                axis=0
            )

            self.var[idx, :] = np.var(
                X_c,
                axis=0
            )

            self.priors[idx] = (
                len(X_c) / n_samples
            )

    def predict(self, X):

        predictions = [
            self._predict(x)
            for x in X
        ]

        return np.array(predictions)

    def _predict(self, x):

        posteriors = []

        for idx, c in enumerate(self.classes):

            prior = np.log(
                self.priors[idx]
            )

            likelihood = np.sum(
                np.log(
                    self._pdf(
                        idx,
                        x
                    )
                )
            )

            posterior = (
                prior + likelihood
            )

            posteriors.append(
                posterior
            )

        return self.classes[
            np.argmax(posteriors)
        ]

    def _pdf(
        self,
        class_idx,
        x
    ):

        mean = self.mean[class_idx]

        var = self.var[class_idx]

        numerator = np.exp(
            -((x - mean) ** 2)
            / (2 * var)
        )

        denominator = np.sqrt(
            2 * np.pi * var
        )

        return numerator / denominator
```
