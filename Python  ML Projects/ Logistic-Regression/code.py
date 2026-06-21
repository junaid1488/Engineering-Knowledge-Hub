import numpy as np
import matplotlib.pyplot as plt

np.random.seed(42)

hours_studied = np.array([
    1, 2, 3, 4, 5,
    6, 7, 8, 9, 10
])

passed = np.array([
    0, 0, 0, 0, 0,
    1, 1, 1, 1, 1
])

def sigmoid(z):
    return 1 / (1 + np.exp(-z))

weight = 0.0
bias = 0.0

learning_rate = 0.01
epochs = 5000

loss_history = []

for epoch in range(epochs):

    linear_model = (
        weight * hours_studied
        + bias
    )

    predictions = sigmoid(
        linear_model
    )

    loss = -np.mean(
        passed * np.log(predictions + 1e-9)
        +
        (1 - passed)
        * np.log(1 - predictions + 1e-9)
    )

    loss_history.append(loss)

    dw = (
        1 / len(hours_studied)
    ) * np.sum(
        (
            predictions
            - passed
        )
        * hours_studied
    )

    db = (
        1 / len(hours_studied)
    ) * np.sum(
        predictions
        - passed
    )

    weight -= (
        learning_rate * dw
    )

    bias -= (
        learning_rate * db
    )

final_probabilities = sigmoid(
    weight * hours_studied
    + bias
)

predicted_classes = (
    final_probabilities >= 0.5
).astype(int)

accuracy = np.mean(
    predicted_classes == passed
)

future_hours = np.array([
    3,
    5,
    7,
    9,
    11
])

future_probabilities = sigmoid(
    weight * future_hours
    + bias
)

print("\nLOGISTIC REGRESSION REPORT")
print("=" * 35)

print(
    f"Weight: {weight:.4f}"
)

print(
    f"Bias: {bias:.4f}"
)

print(
    f"Accuracy: {accuracy:.2%}"
)

print("\nFuture Predictions")

for h, p in zip(
    future_hours,
    future_probabilities
):

    result = (
        "PASS"
        if p >= 0.5
        else "FAIL"
    )

    print(
        f"{h} Hours -> "
        f"{p:.2%} -> {result}"
    )

plt.figure(figsize=(12, 8))

plt.subplot(2, 1, 1)

plt.scatter(
    hours_studied,
    passed,
    s=100,
    label="Actual Data"
)

x_range = np.linspace(
    0,
    12,
    200
)

y_range = sigmoid(
    weight * x_range
    + bias
)

plt.plot(
    x_range,
    y_range,
    linewidth=3,
    label="Sigmoid Curve"
)

plt.scatter(
    future_hours,
    future_probabilities,
    marker="x",
    s=120,
    label="Predictions"
)

plt.xlabel(
    "Hours Studied"
)

plt.ylabel(
    "Probability of Passing"
)

plt.title(
    "Student Pass/Fail Prediction"
)

plt.legend()

plt.grid(True)

plt.subplot(2, 1, 2)

plt.plot(
    loss_history
)

plt.title(
    "Training Loss"
)

plt.xlabel(
    "Epoch"
)

plt.ylabel(
    "Binary Cross Entropy Loss"
)

plt.grid(True)

plt.tight_layout()

plt.show()
