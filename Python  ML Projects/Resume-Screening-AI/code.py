import matplotlib.pyplot as plt
#taking input for the online compiler #
resume_text = """
Python SQL Machine Learning Data Analysis
Pandas NumPy Statistics Power BI Git
"""

job_description = """
Python Machine Learning SQL Deep Learning
Data Analysis Power BI Communication
"""

resume_skills = set(
    word.lower()
    for word in resume_text.split()
)

job_skills = set(
    word.lower()
    for word in job_description.split()
)

matched_skills = (
    resume_skills
    &
    job_skills
)

missing_skills = (
    job_skills
    -
    resume_skills
)

match_score = (
    len(matched_skills)
    /
    len(job_skills)
) * 100

print("\nRESUME SCREENING REPORT")
print("=" * 50)

print("\nDetected Resume Skills:")
for skill in sorted(resume_skills):
    print(skill.title())

print("\nRequired Job Skills:")
for skill in sorted(job_skills):
    print(skill.title())

print("\nMatched Skills:")
for skill in sorted(matched_skills):
    print(skill.title())

print("\nMissing Skills:")
for skill in sorted(missing_skills):
    print(skill.title())

print(
    f"\nJob Match Score: {match_score:.2f}%"
)

if match_score >= 80:
    recommendation = "Highly Recommended"

elif match_score >= 60:
    recommendation = "Recommended"

elif match_score >= 40:
    recommendation = "Consider for Review"

else:
    recommendation = "Not Recommended"

print(
    f"Recommendation: {recommendation}"
)

labels = [
    "Matched Skills",
    "Missing Skills"
]

values = [
    len(matched_skills),
    len(missing_skills)
]

plt.figure(figsize=(7, 5))

plt.bar(
    labels,
    values
)

plt.title(
    "Resume Match Analysis"
)

plt.ylabel(
    "Number of Skills"
)

plt.show()
