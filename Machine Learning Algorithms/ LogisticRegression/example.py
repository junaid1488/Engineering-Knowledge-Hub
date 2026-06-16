```python
import numpy as np
from logistic_regression import LogisticRegression

X = np.array([
    [1],
    [2],
    [3],
    [4],
    [5],
    [6]
])

y = np.array([0, 0, 0, 1, 1, 1])

model = LogisticRegression(
    learning_rate=0.01,
    epochs=1000
)

model.fit(X, y)

prediction = model.predict(np.array([[7]]))

print("Predicted Class:", prediction)
```
