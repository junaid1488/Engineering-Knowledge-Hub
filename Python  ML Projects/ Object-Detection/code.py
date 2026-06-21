import matplotlib.pyplot as plt
import matplotlib.patches as patches

objects = [
    {
        "name": "Car",
        "x": 50,
        "y": 80,
        "width": 120,
        "height": 70,
        "confidence": 98.4
    },
    {
        "name": "Person",
        "x": 250,
        "y": 50,
        "width": 60,
        "height": 150,
        "confidence": 96.2
    },
    {
        "name": "Dog",
        "x": 400,
        "y": 120,
        "width": 90,
        "height": 70,
        "confidence": 94.8
    },
    {
        "name": "Bicycle",
        "x": 550,
        "y": 90,
        "width": 130,
        "height": 90,
        "confidence": 97.1
    }
]

colors = [
    "red",
    "green",
    "blue",
    "orange"
]

fig, ax = plt.subplots(figsize=(12, 6))

ax.set_xlim(0, 750)
ax.set_ylim(350, 0)

print("\nOBJECT DETECTION REPORT")
print("=" * 50)

for i, obj in enumerate(objects):

    rect = patches.Rectangle(
        (obj["x"], obj["y"]),
        obj["width"],
        obj["height"],
        linewidth=3,
        edgecolor=colors[i],
        facecolor="none"
    )

    ax.add_patch(rect)

    area = (
        obj["width"]
        * obj["height"]
    )

    print(f"\nObject {i+1}")
    print(f"Name       : {obj['name']}")
    print(f"Position   : ({obj['x']}, {obj['y']})")
    print(f"Width      : {obj['width']}")
    print(f"Height     : {obj['height']}")
    print(f"Area       : {area}")
    print(f"Confidence : {obj['confidence']}%")

    ax.text(
        obj["x"],
        obj["y"] - 10,
        f"{obj['name']} ({obj['confidence']}%)",
        fontsize=9
    )

print(
    f"\nTotal Objects Detected: {len(objects)}"
)

ax.set_title(
    "Object Detection System"
)

plt.grid(True)

plt.show()
