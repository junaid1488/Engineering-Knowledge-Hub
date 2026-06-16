```python
import numpy as np
from naive_bayes import NaiveBayes

X = np.array([
    [1, 2],
    [2, 3],
    [3, 3],
    [8, 8],
    [9, 9],
    [10, 8]
])

y = np.array([
    0,
    0,
    0,
    1,
    1,
    1
])

model = NaiveBayes()

model.fit(X, y)

predictions = model.predict(
    np.array([
        [2, 2],
        [9, 8]
    ])
)

print(
    "Predictions:",
    predictions
)
```
