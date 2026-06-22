import matplotlib.pyplot as plt
#taking input for the online compiler #
candidate_name = "Mohd Juned"

answers = [
    "I have experience in Python and Machine Learning.",
    "I have built AI and Data Science projects.",
    "I enjoy solving DSA problems on LeetCode.",
    "I know Git, GitHub and basic DevOps concepts.",
    "I am interested in AI, ML and Data Analytics."
]

technical_keywords = {
    "python",
    "machine",
    "learning",
    "ai",
    "data",
    "analytics",
    "sql",
    "git",
    "github",
    "devops",
    "dsa",
    "leetcode"
}

communication_keywords = {
    "experience",
    "built",
    "enjoy",
    "interested",
    "team",
    "project",
    "developed",
    "learned"
}

technical_score = 0
communication_score = 0

for answer in answers:

    words = answer.lower().split()

    for word in words:

        cleaned_word = word.strip(".,!?")

        if cleaned_word in technical_keywords:
            technical_score += 1

        if cleaned_word in communication_keywords:
            communication_score += 1

technical_score = min(
    (technical_score * 5),
    100
)

communication_score = min(
    (communication_score * 8),
    100
)

overall_score = (
    technical_score +
    communication_score
) / 2

if overall_score >= 80:
    recommendation = "Strong Hire"

elif overall_score >= 60:
    recommendation = "Hire"

elif overall_score >= 40:
    recommendation = "Consider"

else:
    recommendation = "Reject"

print("\nAI INTERVIEW ANALYSIS REPORT")
print("=" * 50)

print(f"\nCandidate : {candidate_name}")

print(
    f"\nTechnical Score : {technical_score}/100"
)

print(
    f"Communication Score : {communication_score}/100"
)

print(
    f"Overall Score : {overall_score:.2f}/100"
)

print(
    f"Recommendation : {recommendation}"
)

categories = [
    "Technical",
    "Communication",
    "Overall"
]

scores = [
    technical_score,
    communication_score,
    overall_score
]

plt.figure(figsize=(8, 5))

plt.bar(
    categories,
    scores
)

plt.ylim(0, 100)

plt.title(
    "AI Interview Performance Analysis"
)

plt.ylabel(
    "Score"
)

plt.show()
