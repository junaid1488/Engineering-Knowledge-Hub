import numpy as np
import matplotlib.pyplot as plt
#taking input for the online compiler #
months = np.arange(1, 13)

sales = np.array([
    120,
    135,
    150,
    170,
    185,
    210,
    230,
    250,
    270,
    300,
    330,
    360
])

x_mean = np.mean(months)
y_mean = np.mean(sales)

numerator = np.sum(
    (months - x_mean)
    *
    (sales - y_mean)
)

denominator = np.sum(
    (months - x_mean) ** 2
)

slope = numerator / denominator

intercept = (
    y_mean
    - slope * x_mean
)

forecast_months = np.array([
    13,
    14,
    15,
    16,
    17,
    18
])

forecast_sales = (
    slope * forecast_months
    + intercept
)

print("\nTIME SERIES FORECASTING REPORT")
print("=" * 50)

print(
    f"Slope: {slope:.2f}"
)

print(
    f"Intercept: {intercept:.2f}"
)

print("\nFuture Forecast")

for month, value in zip(
    forecast_months,
    forecast_sales
):

    print(
        f"Month {month}: "
        f"{value:.2f}"
    )

plt.figure(
    figsize=(10, 6)
)
#plot the graph of data #
plt.plot(
    months,
    sales,
    marker="o",
    linewidth=3,
    label="Historical Data"
)

plt.plot(
    forecast_months,
    forecast_sales,
    marker="o",
    linestyle="--",
    linewidth=3,
    label="Forecast"
)

plt.title(
    "Sales Forecasting"
)

plt.xlabel(
    "Month"
)

plt.ylabel(
    "Sales"
)

plt.legend()

plt.grid(True)

plt.show()
