import matplotlib.pyplot as plt
# input for the online compiler #
news_articles = [
    "Scientists discover a new renewable energy source.",
    "Aliens have landed in Lucknow and opened a shopping mall.",
    "Government launches new education initiative.",
    "Secret pill guarantees immortality within one week.",
    "Researchers develop advanced AI healthcare system."
]

fake_keywords = {
    "aliens",
    "immortality",
    "secret",
    "guarantees",
    "miracle",
    "unbelievable",
    "shocking"
}

real_count = 0
fake_count = 0

print("\nFAKE NEWS DETECTION REPORT")
print("=" * 50)

for article in news_articles:

    score = 0

    words = article.lower().split()

    for word in words:

        cleaned_word = word.strip(".,!?")

        if cleaned_word in fake_keywords:
            score += 1

    if score >= 1:

        prediction = "Fake News"
        fake_count += 1

    else:

        prediction = "Real News"
        real_count += 1

    print(f"\nArticle : {article}")
    print(f"Prediction : {prediction}")

labels = [
    "Real News",
    "Fake News"
]

values = [
    real_count,
    fake_count
]

plt.figure(figsize=(7, 5))

plt.bar(
    labels,
    values
)

plt.title(
    "Fake News Detection Analysis"
)

plt.ylabel(
    "Number of Articles"
)

plt.grid(True)

plt.show()
