import cv2
import numpy as np
import requests
import matplotlib.pyplot as plt

url = "https://raw.githubusercontent.com/opencv/opencv/master/samples/data/lena.jpg"

response = requests.get(url)

image_array = np.asarray(
    bytearray(response.content),
    dtype=np.uint8
)

image = cv2.imdecode(
    image_array,
    cv2.IMREAD_COLOR
)

gray = cv2.cvtColor(
    image,
    cv2.COLOR_BGR2GRAY
)

face_cascade = cv2.CascadeClassifier(
    cv2.data.haarcascades +
    "haarcascade_frontalface_default.xml"
)

faces = face_cascade.detectMultiScale(
    gray,
    scaleFactor=1.1,
    minNeighbors=5
)

print(f"Faces Detected: {len(faces)}")

for i, (x, y, w, h) in enumerate(faces):

    roi = image[y:y+h, x:x+w]

    avg_color = np.mean(
        roi,
        axis=(0, 1)
    ).astype(int)

    if avg_color[2] > 160:
        tone = "Light"
    elif avg_color[2] > 120:
        tone = "Medium"
    else:
        tone = "Dark"

    shape = "Oval"

    if w > h:
        shape = "Round"
    elif h > w:
        shape = "Long"

    print("\nFace", i + 1)
    print("Position:", (x, y))
    print("Width:", w)
    print("Height:", h)
    print("Shape:", shape)
    print("Tone:", tone)

    cv2.rectangle(
        image,
        (x, y),
        (x+w, y+h),
        (0, 255, 0),
        2
    )

plt.imshow(
    cv2.cvtColor(
        image,
        cv2.COLOR_BGR2RGB
    )
)

plt.axis("off")
plt.show()
