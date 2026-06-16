```python
import numpy as np
from random_forest import RandomForest

X = np.array([
    [2, 3],
    [3, 4],
    [4, 5],
    [8, 7],
    [9, 8],
    [10, 9]
])

y = np.array([
    0,
    0,
    0,
    1,
    1,
    1
])

model = RandomForest(
    n_trees=5,
    max_depth=3
)

model.fit(X, y)

predictions = model.predict(
    np.array([
        [3, 3],
        [9, 9]
    ])
)

print("Predictions:", predictions)
```
