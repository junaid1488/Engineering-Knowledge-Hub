```python
import numpy as np
from linear_regression import LinearRegression

X = np.array([1, 2, 3, 4, 5])
y = np.array([2, 4, 6, 8, 10])

model = LinearRegression(
    learning_rate=0.01,
    epochs=1000
)

model.fit(X, y)

prediction = model.predict(np.array([6]))

print("Prediction for x=6 :", prediction)
```
