import numpy as np
import matplotlib.pyplot as plt

np.random.seed(42)

hours_studied = np.array([
    1, 2, 3, 4, 5,
    6, 7, 8, 9, 10
])

exam_scores = np.array([
    35, 40, 48, 55, 60,
    68, 75, 80, 90, 95
])

n = len(hours_studied)

weight = 0.0
bias = 0.0

learning_rate = 0.01
epochs = 5000

loss_history = []

for epoch in range(epochs):

    predictions = (
        weight * hours_studied
        + bias
    )

    loss = np.mean(
        (exam_scores - predictions) ** 2
    )

    loss_history.append(loss)

    dw = (
        -2 / n
    ) * np.sum(
        hours_studied *
        (
            exam_scores
            - predictions
        )
    )

    db = (
        -2 / n
    ) * np.sum(
        exam_scores
        - predictions
    )

    weight -= (
        learning_rate * dw
    )

    bias -= (
        learning_rate * db
    )

final_predictions = (
    weight * hours_studied
    + bias
)

future_hours = np.array([
    11,
    12,
    13,
    14,
    15
])

future_predictions = (
    weight * future_hours
    + bias
)

mse = np.mean(
    (
        exam_scores
        - final_predictions
    ) ** 2
)

r2 = (
    1
    -
    (
        np.sum(
            (
                exam_scores
                - final_predictions
            ) ** 2
        )
        /
        np.sum(
            (
                exam_scores
                - np.mean(exam_scores)
            ) ** 2
        )
    )
)

print("\nLINEAR REGRESSION REPORT")
print("=" * 35)

print(
    f"Weight: {weight:.4f}"
)

print(
    f"Bias: {bias:.4f}"
)

print(
    f"MSE: {mse:.4f}"
)

print(
    f"R2 Score: {r2:.4f}"
)

print("\nFuture Predictions")

for h, score in zip(
    future_hours,
    future_predictions
):
    print(
        f"{h} Hours -> {score:.2f} Marks"
    )

plt.figure(figsize=(12, 8))

plt.subplot(2, 1, 1)

plt.scatter(
    hours_studied,
    exam_scores,
    s=80,
    label="Actual Data"
)

plt.plot(
    hours_studied,
    final_predictions,
    linewidth=3,
    label="Regression Line"
)

plt.scatter(
    future_hours,
    future_predictions,
    marker="x",
    s=120,
    label="Predictions"
)

plt.title(
    "Student Performance Prediction"
)

plt.xlabel(
    "Hours Studied"
)

plt.ylabel(
    "Exam Score"
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
    "MSE Loss"
)

plt.grid(True)

plt.tight_layout()

plt.show()
