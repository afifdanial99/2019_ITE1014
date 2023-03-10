import imageio
img=imageio.imread("carry_grant.jpg")
size=img.shape
x=size[0] #세로
y=size[1] #가로
total=0
group=[[0 for _ in range(3)] for _ in range(256)]
var=[]
for x in range(256):
    group[x][0]=x
for i in range(x):
    for j in range(y):
        group[img[i][j]][1]+=1
for i in range(256):
    group[i][2]=(group[i][1]/(x*y))*100
print("bin\t\tcount\t\tpercentage(%)")
for x in range(256):
    print("%d:\t\t"%group[x][0]+"%d\t\t"%group[x][1]+"%0.04f"%group[x][2])
