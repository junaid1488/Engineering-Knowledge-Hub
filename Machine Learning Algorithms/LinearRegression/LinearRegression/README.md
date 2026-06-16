# Linear Regression From Scratch using NumPy

## 📖 Theory

Linear Regression is a supervised machine learning algorithm used to predict continuous values by finding the best-fit line through the data.

Examples:

* House Price Prediction
* Sales Forecasting
* Stock Price Prediction
* Demand Forecasting

---

## 🧮 Mathematical Formula

### Hypothesis Function

```text
y = wx + b
```

Where:

* x = Input Feature
* y = Predicted Output
* w = Weight (Slope)
* b = Bias (Intercept)

### Cost Function (Mean Squared Error)

```text
J(w,b) = (1/n) Σ(y_pred - y_actual)²
```

Goal: Minimize the cost function using Gradient Descent.

### Gradient Descent Update Rule

```text
w = w - α * dw
b = b - α * db
```

---

## ⚡ NumPy Implementation

File:

```text
linear_regression.py
```

---

## 🧪 Example Usage

```bash
python example.py
```

Expected Output:

```text
Prediction for x=6 : [12.]
```

---

## 📈 Time Complexity

| Operation  | Complexity    |
| ---------- | ------------- |
| Training   | O(n × epochs) |
| Prediction | O(n)          |

---

## 🎯 Real-World Applications

* House Price Prediction
* Revenue Forecasting
* Demand Forecasting
* Weather Prediction
* Business Analytics

---

## ✅ Advantages

* Easy to Understand
* Fast Training
* Interpretable Results

---

## ❌ Limitations

* Assumes Linear Relationship
* Sensitive to Outliers
* Poor for Complex Patterns

---

## 📂 Project Structure

```text
LinearRegression/
│
├── README.md
├── linear_regression.py
└── example.py
```
