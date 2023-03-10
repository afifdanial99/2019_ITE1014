import imageio

img=imageio.imread("HDR.jpg")
size=img.shape
x=size[0]
y=size[1]
print(img[3][63])
