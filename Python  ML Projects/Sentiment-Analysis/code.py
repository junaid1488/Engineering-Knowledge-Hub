import matplotlib.pyplot as plt
#taking input for the online compiler #
positive_words = {
    "good",
    "great",
    "excellent",
    "amazing",
    "awesome",
    "happy",
    "love",
    "best",
    "fantastic",
    "wonderful",
    "success",
    "nice"
}

negative_words = {
    "bad",
    "poor",
    "terrible",
    "awful",
    "worst",
    "hate",
    "sad",
    "failure",
    "angry",
    "problem",
    "disappointing",
    "boring"
}

reviews = [
    "This product is amazing and excellent",
    "The service was terrible and bad",
    "I love this wonderful experience",
    "The product quality is poor and disappointing",
    "Fantastic customer support and great service",
    "Worst purchase ever"
]

positive_count = 0
negative_count = 0
neutral_count = 0

print("\nSENTIMENT ANALYSIS REPORT")
print("=" * 50)

for review in reviews:

    words = review.lower().split()

    pos_score = sum(
        word in positive_words
        for word in words
    )

    neg_score = sum(
        word in negative_words
        for word in words
    )

    if pos_score > neg_score:

        sentiment = "Positive"
        positive_count += 1

    elif neg_score > pos_score:

        sentiment = "Negative"
        negative_count += 1

    else:

        sentiment = "Neutral"
        neutral_count += 1

    print(f"\nReview: {review}")
    print(f"Sentiment: {sentiment}")

print("\nSUMMARY")
print("=" * 20)

print(
    f"Positive Reviews: {positive_count}"
)

print(
    f"Negative Reviews: {negative_count}"
)

print(
    f"Neutral Reviews: {neutral_count}"
)

labels = [
    "Positive",
    "Negative",
    "Neutral"
]

values = [
    positive_count,
    negative_count,
    neutral_count
]

plt.figure(figsize=(8, 6))

plt.pie(
    values,
    labels=labels,
    autopct="%1.1f%%"
)

plt.title(
    "Sentiment Distribution"
)

plt.show()
