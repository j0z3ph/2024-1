import cv2
import numpy as np

img = cv2.imread("lenna.png")

#img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
#h, w = img.shape

h, w, c = img.shape
#kernel = np.array([[1/9,1/9,1/9],[1/9,1/9,1/9],[1/9,1/9,1/9]])

kernel = np.array([[1/25,1/25,1/25,1/25,1/25],
                   [1/25,1/25,1/25,1/25,1/25],
                   [1/25,1/25,1/25,1/25,1/25],
                   [1/25,1/25,1/25,1/25,1/25],
                   [1/25,1/25,1/25,1/25,1/25]])

#kernel = np.array([[-1,-1,-1],[-1,8,-1],[-1,-1,-1]])
result = np.zeros((h, w, c), np.uint8)
#result = np.zeros((h, w), np.uint8)

mhk = kernel.shape[0]//2
mwk = kernel.shape[1]//2

for i in range(mhk, h - mhk):
    for j in range(mwk, w - mwk):
        acc = 0
        for ik in range(0, kernel.shape[0]):
            for jk in range(0, kernel.shape[1]):
               acc += (kernel[ik, jk] * img[i - mhk + ik,j - mwk + jk])
               #print(img[i - mhk + ik,j - mwk + jk])
        #print(np.clip(acc, 0, 255).astype('uint8') )
        #exit(1)
        result[i,j] = np.clip(acc, 0, 255).astype('uint8')  

cv2.imshow("Lenna", img)
cv2.imshow("Resultado", result)
cv2.waitKey()
cv2.destroyAllWindows()