import cv2 
import numpy as np

img = cv2.imread("lenna.png")
h, w, c = img.shape
gris = np.zeros((h,w), np.uint8)

for fila in range(0, h):
    for columna in range(0, w):
        b = img[fila, columna, 0] # canal azul
        g = img[fila, columna, 1] # canal verde
        r = img[fila, columna, 2] # canal rojo
        gris[fila, columna] = np.clip((r/3 + g/3 + b/3), 0, 255).astype('uint8')

cv2.imshow("Original", img)        
cv2.imshow("Gris", gris)
cv2.waitKey()
cv2.destroyAllWindows()