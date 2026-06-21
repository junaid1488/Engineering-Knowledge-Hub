import numpy as np
import matplotlib.pyplot as plt

months = [
    "Jan",
    "Feb",
    "Mar",
    "Apr",
    "May",
    "Jun",
    "Jul",
    "Aug",
    "Sep",
    "Oct",
    "Nov",
    "Dec"
]

sales = np.array([
    120,
    150,
    180,
    220,
    250,
    270,
    310,
    330,
    360,
    400,
    430,
    500
])

profit = np.array([
    20,
    25,
    30,
    40,
    45,
    50,
    60,
    70,
    80,
    90,
    95,
    110
])

print("\nDATA VISUALIZATION REPORT")
print("=" * 40)

print(
    f"Total Sales: {np.sum(sales)}"
)

print(
    f"Average Sales: {np.mean(sales):.2f}"
)

print(
    f"Maximum Sales: {np.max(sales)}"
)

print(
    f"Minimum Sales: {np.min(sales)}"
)

print(
    f"Total Profit: {np.sum(profit)}"
)

plt.figure(figsize=(14, 10))

plt.subplot(2, 2, 1)

plt.plot(
    months,
    sales,
    marker="o",
    linewidth=3
)

plt.title(
    "Monthly Sales Trend"
)

plt.xlabel(
    "Month"
)

plt.ylabel(
    "Sales"
)

plt.grid(True)

plt.subplot(2, 2, 2)

plt.bar(
    months,
    sales
)

plt.title(
    "Monthly Sales Comparison"
)

plt.xlabel(
    "Month"
)

plt.ylabel(
    "Sales"
)

plt.subplot(2, 2, 3)

plt.scatter(
    sales,
    profit,
    s=100
)

plt.title(
    "Sales vs Profit"
)

plt.xlabel(
    "Sales"
)

plt.ylabel(
    "Profit"
)

plt.grid(True)

plt.subplot(2, 2, 4)

plt.pie(
    sales,
    labels=months,
    autopct="%1.1f%%"
)

plt.title(
    "Sales Distribution"
)

plt.tight_layout()

plt.show()
