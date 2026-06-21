import numpy as np
import matplotlib.pyplot as plt

image = np.random.randint(
    0,
    256,
    (256, 256, 3),
    dtype=np.uint8
)

gray = np.mean(
    image,
    axis=2
).astype(np.uint8)

edges = np.zeros_like(gray)

edges[:, 1:] = np.abs(
    gray[:, 1:].astype(int)
    -
    gray[:, :-1].astype(int)
)

mean_pixel = np.mean(gray)
median_pixel = np.median(gray)
min_pixel = np.min(gray)
max_pixel = np.max(gray)
std_pixel = np.std(gray)

print("\nIMAGE ANALYSIS REPORT")
print("=" * 30)

print(
    f"Image Shape : {image.shape}"
)

print(
    f"Mean Pixel  : {mean_pixel:.2f}"
)

print(
    f"Median Pixel: {median_pixel:.2f}"
)

print(
    f"Min Pixel   : {min_pixel}"
)

print(
    f"Max Pixel   : {max_pixel}"
)

print(
    f"Std Dev     : {std_pixel:.2f}"
)

plt.figure(figsize=(12, 8))

plt.subplot(2, 2, 1)

plt.imshow(image)

plt.title(
    "Original Image"
)

plt.axis("off")

plt.subplot(2, 2, 2)

plt.imshow(
    gray,
    cmap="gray"
)

plt.title(
    "Grayscale Image"
)

plt.axis("off")

plt.subplot(2, 2, 3)

plt.imshow(
    edges,
    cmap="gray"
)

plt.title(
    "Edge Detection"
)

plt.axis("off")

plt.subplot(2, 2, 4)

plt.hist(
    gray.ravel(),
    bins=50
)

plt.title(
    "Pixel Histogram"
)

plt.tight_layout()

plt.show()
