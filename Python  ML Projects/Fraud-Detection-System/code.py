import matplotlib.pyplot as plt
#taking input for the online compiler #
transactions = [
    {"id": 1001, "amount": 500, "location": "Lucknow"},
    {"id": 1002, "amount": 15000, "location": "Delhi"},
    {"id": 1003, "amount": 2500, "location": "Lucknow"},
    {"id": 1004, "amount": 45000, "location": "Unknown"},
    {"id": 1005, "amount": 800, "location": "Kanpur"}
]

transaction_ids = []
risk_scores = []

print("\nFRAUD DETECTION REPORT")
print("=" * 50)

for transaction in transactions:

    risk_score = 0

    if transaction["amount"] > 10000:
        risk_score += 50

    if transaction["amount"] > 30000:
        risk_score += 30

    if transaction["location"] == "Unknown":
        risk_score += 20

    risk_score = min(risk_score, 100)

    if risk_score >= 70:
        status = "Fraud Suspected"

    elif risk_score >= 40:
        status = "Needs Review"

    else:
        status = "Safe"

    print(f"\nTransaction ID : {transaction['id']}")
    print(f"Amount         : ₹{transaction['amount']}")
    print(f"Location       : {transaction['location']}")
    print(f"Risk Score     : {risk_score}%")
    print(f"Status         : {status}")

    transaction_ids.append(
        str(transaction["id"])
    )

    risk_scores.append(
        risk_score
    )

plt.figure(figsize=(8, 5))

plt.bar(
    transaction_ids,
    risk_scores
)

plt.title(
    "Fraud Risk Analysis"
)

plt.xlabel(
    "Transaction ID"
)

plt.ylabel(
    "Risk Score (%)"
)

plt.ylim(0, 100)

plt.grid(True)

plt.show()
