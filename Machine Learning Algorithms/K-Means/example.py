```python
import numpy as np
from kmeans import KMeans

X = np.array([
    [1, 2],
    [2, 3],
    [3, 2],
    [8, 8],
    [9, 9],
    [10, 8]
])

model = KMeans(
    k=2,
    max_iters=100
)

model.fit(X)

print(
    "Cluster Labels:"
)

print(model.labels_)
```
