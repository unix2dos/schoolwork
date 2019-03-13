import sys
import cv2
import numpy as np


if len(sys.argv) != 2 :
    print("usage: ./images path")
    sys.exit(1)

img = cv2.imread(sys.argv[1])
cv2.imshow("Source", img)

img90 = np.rot90(img)
cv2.imshow("Rotate", img90)

cv2.waitKey(0)
cv2.destroyAllWindows()
