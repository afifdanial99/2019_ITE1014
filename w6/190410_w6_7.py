import imageio

img=imageio.imread("HDR.jpg")
size=img.shape
x=size[0]
y=size[1]
group=[0 for i in range(256)]
def p(n):
    return group[n]/(x*y)
def g(i,j):
    tap=0
    for w in range(img[i][j]+1):
        tap+=p(w)
    ans=tap*255
    if ans%1>=0.5:
        return int(ans)+1
    else: return int(ans)

for i in range(x):
    for j in range(y):
        group[img[i][j]]+=1
for q in range(x):
    for w in range(y):
        img[q][w]=g(q,w)

imageio.imwrite("이름.jpg", img)
print("The End")
