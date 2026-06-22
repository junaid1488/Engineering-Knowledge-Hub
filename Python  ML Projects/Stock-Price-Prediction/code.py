import numpy as np
import matplotlib.pyplot as plt
#taking input for the online compiler #
days = np.arange(1, 31)

stock_prices = np.array([
    100, 102, 104, 103, 106,
    108, 110, 109, 112, 115,
    117, 118, 120, 122, 121,
    124, 126, 128, 130, 132,
    131, 134, 136, 138, 140,
    142, 145, 147, 149, 150
])

x_mean = np.mean(days)
y_mean = np.mean(stock_prices)

numerator = np.sum(
    (days - x_mean)
    *
    (stock_prices - y_mean)
)

denominator = np.sum(
    (days - x_mean) ** 2
)

slope = numerator / denominator

intercept = (
    y_mean
    - slope * x_mean
)

future_days = np.array([
    31,
    32,
    33,
    34,
    35
])

future_prices = (
    slope * future_days
    + intercept
)

print("\nSTOCK PRICE PREDICTION REPORT")
print("=" * 50)

print(
    f"Slope: {slope:.2f}"
)

print(
    f"Intercept: {intercept:.2f}"
)

print("\nPredicted Prices")

for day, price in zip(
    future_days,
    future_prices
):

    print(
        f"Day {day}: ₹{price:.2f}"
    )

plt.figure(figsize=(10, 6))

plt.plot(
    days,
    stock_prices,
    marker="o",
    linewidth=3,
    label="Historical Prices"
)

plt.plot(
    future_days,
    future_prices,
    marker="o",
    linestyle="--",
    linewidth=3,
    label="Predicted Prices"
)

plt.title(
    "Stock Price Prediction"
)

plt.xlabel(
    "Trading Day"
)

plt.ylabel(
    "Stock Price"
)

plt.legend()

plt.grid(True)

plt.show()
