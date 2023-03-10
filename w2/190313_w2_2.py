a=1 #별의 개수
b=int((9-a)/2)
while a<=9:
    for x in range(b):
        print(" ", end="")
    for x in range(a):
        print("*",end="")
    for x in range(b):
        print(" ", end="")
    print()
    a+=2
    b=int((9-a)/2)
input()
