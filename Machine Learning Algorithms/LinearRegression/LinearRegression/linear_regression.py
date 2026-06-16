```python
import numpy as np

class LinearRegression:

    def __init__(self, learning_rate=0.01, epochs=1000):
        self.learning_rate = learning_rate
        self.epochs = epochs
        self.weight = 0
        self.bias = 0

    def fit(self, X, y):

        n = len(X)

        for _ in range(self.epochs):

            y_pred = self.weight * X + self.bias

            dw = (2/n) * np.sum((y_pred - y) * X)
            db = (2/n) * np.sum(y_pred - y)

            self.weight -= self.learning_rate * dw
            self.bias -= self.learning_rate * db

    def predict(self, X):
        return self.weight * X + self.bias
```
