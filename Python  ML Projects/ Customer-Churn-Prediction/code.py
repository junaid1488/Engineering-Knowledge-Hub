import matplotlib.pyplot as plt
#taking input for the online compiler #
customers = [
    {"name": "Customer A", "usage": 90, "support_calls": 1},
    {"name": "Customer B", "usage": 30, "support_calls": 8},
    {"name": "Customer C", "usage": 60, "support_calls": 4},
    {"name": "Customer D", "usage": 20, "support_calls": 10},
    {"name": "Customer E", "usage": 80, "support_calls": 2}
]

print("\nCUSTOMER CHURN PREDICTION REPORT")
print("=" * 50)

customer_names = []
risk_scores = []

for customer in customers:

    risk_score = (
        (100 - customer["usage"]) * 0.6
        +
        customer["support_calls"] * 4
    )

    risk_score = min(
        round(risk_score, 2),
        100
    )

    if risk_score >= 70:
        status = "High Risk"

    elif risk_score >= 40:
        status = "Medium Risk"

    else:
        status = "Low Risk"

    print(f"\nCustomer: {customer['name']}")
    print(f"Usage Score: {customer['usage']}")
    print(f"Support Calls: {customer['support_calls']}")
    print(f"Churn Risk: {risk_score}%")
    print(f"Status: {status}")

    customer_names.append(
        customer["name"]
    )

    risk_scores.append(
        risk_score
    )

plt.figure(figsize=(8, 5))

plt.bar(
    customer_names,
    risk_scores
)

plt.title(
    "Customer Churn Risk Analysis"
)

plt.ylabel(
    "Risk Score (%)"
)

plt.xlabel(
    "Customers"
)

plt.ylim(0, 100)

plt.grid(True)

plt.show()
