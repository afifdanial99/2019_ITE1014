import random
def sorting(z):
    r=1
    while r<=50:
        for i in range(0, len(z)-1):
            if z[i]>z[i+1]:
                t=z[i];v=z[i+1];z[i]=v;z[i+1]=t
            i+=1
        i=1
        r+=1
#main
group=set()
n=len(group)
while n<50:
    p=random.randint(0,1000)
    group.add(p)
    n=len(group)
group=list(group)
print()
sorting(group)
e=0
while e<50:
    print(group[e],end=" ")
    e+=1
print()
print("max value: ",max(group[0:n]))
print("min value: ",min(group[0:n]))
