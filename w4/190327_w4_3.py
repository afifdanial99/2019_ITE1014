n=int(input())
x=1
while x<=n:
    for x in range(1,x+1):
        print(x, end='')
    print()
    x+=1
x-=1
while x!=0:
    for x in range(1, x+1):
        print(x, end='')
    print()
    x-=1
