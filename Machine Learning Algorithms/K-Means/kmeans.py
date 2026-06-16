```python
import numpy as np


class KMeans:

    def __init__(
        self,
        k=2,
        max_iters=100
    ):
        self.k = k
        self.max_iters = max_iters

    def fit(self, X):

        self.X = X

        n_samples, n_features = X.shape

        random_indices = np.random.choice(
            n_samples,
            self.k,
            replace=False
        )

        self.centroids = X[random_indices]

        for _ in range(self.max_iters):

            clusters = self._create_clusters(
                self.centroids
            )

            old_centroids = self.centroids

            self.centroids = self._get_centroids(
                clusters
            )

            if np.all(old_centroids == self.centroids):
                break

        self.labels_ = self._get_cluster_labels(
            clusters
        )

    def predict(self, X):

        labels = []

        for sample in X:

            distances = [
                np.linalg.norm(
                    sample - centroid
                )
                for centroid in self.centroids
            ]

            labels.append(
                np.argmin(distances)
            )

        return np.array(labels)

    def _create_clusters(
        self,
        centroids
    ):

        clusters = [
            [] for _ in range(self.k)
        ]

        for idx, sample in enumerate(self.X):

            distances = [
                np.linalg.norm(
                    sample - point
                )
                for point in centroids
            ]

            centroid_idx = np.argmin(
                distances
            )

            clusters[
                centroid_idx
            ].append(idx)

        return clusters

    def _get_centroids(
        self,
        clusters
    ):

        centroids = np.zeros(
            (
                self.k,
                self.X.shape[1]
            )
        )

        for cluster_idx, cluster in enumerate(clusters):

            cluster_mean = np.mean(
                self.X[cluster],
                axis=0
            )

            centroids[
                cluster_idx
            ] = cluster_mean

        return centroids

    def _get_cluster_labels(
        self,
        clusters
    ):

        labels = np.empty(
            len(self.X)
        )

        for cluster_idx, cluster in enumerate(clusters):

            for sample_idx in cluster:
                labels[sample_idx] = cluster_idx

        return labels.astype(int)
```
