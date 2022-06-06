import cv2
import numpy as np


width = 300
higth = 300

img = np.zeros((higth, width, 3), np.unit8)


p1 = ( 100 , 200 )

p2 = ( 50 , 50 )

p3 = ( 300 , 100 )

cv2.line (img, p1, p2, ( 255 , 0 , 0 ), 3 )

cv2.line (img, p2, p3, ( 255 ,   0 , 0 ), 3 )

cv2.line (img, p1, p3, ( 255 , 0 , 0 ), 3 )

cv2.imshow ( "image" , img)

cv2.waitKey ( 0 )
