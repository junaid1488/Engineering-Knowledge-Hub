```python
import numpy as np
from pca import PCA

X = np.array([
    [1,2],
    [2,3],
    [3,4],
    [5,6]
])

pca = PCA(n_components=1)

pca.fit(X)

X_transformed = pca.transform(X)

print(X_transformed)
```
