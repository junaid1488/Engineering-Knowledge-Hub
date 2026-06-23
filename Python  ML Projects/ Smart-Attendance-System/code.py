import matplotlib.pyplot as plt

students = [
    {
        "name": "Aman",
        "face_detected": True
    },
    {
        "name": "Rahul",
        "face_detected": True
    },
    {
        "name": "Priya",
        "face_detected": False
    },
    {
        "name": "Sneha",
        "face_detected": True
    },
    {
        "name": "Arjun",
        "face_detected": False
    }
]

present = 0
absent = 0

print("\nSMART ATTENDANCE REPORT")
print("=" * 50)

for student in students:

    if student["face_detected"]:

        status = "Present"
        present += 1

    else:

        status = "Absent"
        absent += 1

    print(
        f"\nStudent : {student['name']}"
    )

    print(
        f"Attendance : {status}"
    )

print("\nSUMMARY")
print("=" * 20)

print(f"Present : {present}")
print(f"Absent : {absent}")

labels = [
    "Present",
    "Absent"
]

values = [
    present,
    absent
]

plt.figure(figsize=(7, 5))

plt.pie(
    values,
    labels=labels,
    autopct="%1.1f%%"
)

plt.title(
    "Attendance Distribution"
)

plt.show()
