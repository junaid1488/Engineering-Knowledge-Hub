import matplotlib.pyplot as plt

movies = {
    "Inception": ["Sci-Fi", "Action"],
    "Interstellar": ["Sci-Fi", "Drama"],
    "The Dark Knight": ["Action", "Crime"],
    "Avengers": ["Action", "Adventure"],
    "Titanic": ["Romance", "Drama"],
    "The Notebook": ["Romance", "Drama"],
    "John Wick": ["Action", "Crime"],
    "The Matrix": ["Sci-Fi", "Action"]
}

user_preferences = [
    "Sci-Fi",
    "Action"
]

recommendations = []

print("\nRECOMMENDATION SYSTEM REPORT")
print("=" * 50)

for movie, genres in movies.items():

    score = len(
        set(user_preferences)
        &
        set(genres)
    )

    recommendations.append(
        (
            movie,
            score
        )
    )

recommendations.sort(
    key=lambda x: x[1],
    reverse=True
)

print(
    "\nUser Preferences:"
)

print(user_preferences)

print(
    "\nRecommended Movies"
)

for movie, score in recommendations:

    print(
        f"{movie} "
        f"(Match Score: {score})"
    )

top_movies = [
    movie
    for movie, score
    in recommendations[:5]
]

scores = [
    score
    for movie, score
    in recommendations[:5]
]

plt.figure(
    figsize=(10, 6)
)

plt.bar(
    top_movies,
    scores
)

plt.title(
    "Top Movie Recommendations"
)

plt.xlabel(
    "Movies"
)

plt.ylabel(
    "Match Score"
)

plt.xticks(
    rotation=20
)

plt.tight_layout()

plt.show()
