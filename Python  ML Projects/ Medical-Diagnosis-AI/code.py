import matplotlib.pyplot as plt
#taking input for the online compiler #
patients = [
    {
        "name": "Patient A",
        "fever": True,
        "cough": True,
        "fatigue": True
    },
    {
        "name": "Patient B",
        "fever": False,
        "cough": True,
        "fatigue": False
    },
    {
        "name": "Patient C",
        "fever": True,
        "cough": True,
        "fatigue": False
    },
    {
        "name": "Patient D",
        "fever": False,
        "cough": False,
        "fatigue": False
    }
]

patient_names = []
risk_scores = []

print("\nMEDICAL DIAGNOSIS REPORT")
print("=" * 50)

for patient in patients:

    score = 0

    if patient["fever"]:
        score += 40

    if patient["cough"]:
        score += 30

    if patient["fatigue"]:
        score += 30

    if score >= 80:
        diagnosis = "High Risk"

    elif score >= 50:
        diagnosis = "Moderate Risk"

    else:
        diagnosis = "Low Risk"

    print(f"\nPatient : {patient['name']}")
    print(f"Fever   : {patient['fever']}")
    print(f"Cough   : {patient['cough']}")
    print(f"Fatigue : {patient['fatigue']}")
    print(f"Risk    : {score}%")
    print(f"Result  : {diagnosis}")

    patient_names.append(
        patient["name"]
    )

    risk_scores.append(
        score
    )

plt.figure(figsize=(8, 5))

plt.bar(
    patient_names,
    risk_scores
)

plt.title(
    "Medical Diagnosis Risk Analysis"
)

plt.xlabel(
    "Patients"
)

plt.ylabel(
    "Risk Score (%)"
)

plt.ylim(0, 100)

plt.grid(True)

plt.show()
