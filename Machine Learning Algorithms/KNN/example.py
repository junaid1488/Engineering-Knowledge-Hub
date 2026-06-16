```python
import numpy as np
from knn import KNN

X = np.array([
    [1, 2],
    [2, 3],
    [3, 3],
    [6, 5],
    [7, 7],
    [8, 6]
])

y = np.array([0, 0, 0, 1, 1, 1])

model = KNN(k=3)

model.fit(X, y)

prediction = model.predict(
    np.array([[2, 2]])
)

print("Predicted Class:", prediction)
```
