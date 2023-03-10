import random

def comp(var1, var2):
    if var1>var2:
        return 1
    elif var1<var2:
        return -1
    else: return 0
    
a=random.randint(0,100)
x=1000
while x!=a:
    x=int(input())
    check=comp(x, a)
    if check==1:
        print("Smaller than ",x,".", end='')
        print()
    elif check==-1:
        print("Larger than ", x,".", end='')
        print()
    else:
        print("Yes. Right.")
        print()
