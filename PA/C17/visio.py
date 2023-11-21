import cv2
import matplotlib.pyplot as plt

img = cv2.imread("lenna.png")
img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB )
#plt.imshow(img)  
#plt.waitforbuttonpress()
#plt.close('all')
cv2.imshow("Lenna", img)
cv2.waitKey()
cv2.destroyAllWindows()