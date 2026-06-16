```python
import numpy as np
from svm import SVM

X = np.array([
    [1,2],
    [2,3],
    [3,3],
    [8,8],
    [9,9],
    [10,8]
])

y = np.array([
    -1,
    -1,
    -1,
     1,
     1,
     1
])

model = SVM()

model.fit(X, y)

predictions = model.predict(
    np.array([
        [2,2],
        [9,9]
    ])
)

print(
    "Predictions:",
    predictions
)
```
