import imageio
def quicksort(e):
    if len(e) <= 1:
        return e

    pivot = e[len(e) // 2]
    less = []
    more = []
    equal = []
    for a in e:
        if a < pivot:
            less.append(a)
        elif a > pivot:
            more.append(a)
        else:
            equal.append(a)

    return quicksort(less) + equal + quicksort(more)

img=imageio.imread("carry_grant.jpg")
size=img.shape
x=size[0] #세로
y=size[1] #가로
total=0

solve=[]
for i in range(x):
    for j in range(y):
        solve.append(img[i][j])
        total+=img[i][j]
solve=quicksort(solve)
maximum=solve[(x-1)*(y-1)]
minimum=solve[0]
mean=solve[((x-1)*(y-1))//2]
average=total/(x*y)
var=0
for i in range(x):
    for j in range(y):
        var+=((img[i][j])-average)**2
var=var/(x*y)
print("average of pixel values:\n",average)
print("maximum pixel value:\n",maximum)
print("minimum pixel value:\n",minimum)
print("variance of pixel values:\n",var)
print("medium values of pixel values:\n", mean)
