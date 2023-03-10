a=9 #별의 개수
while a>=1:
    for x in range(int((9-a)/2)):
        print(" ", end="")
    for x in range(a):
        print("*",end="")
    for x in range(int((9-a)/2)):
        print(" ", end="")
    print()
    a-=2
a+=4
while a<=9:
    for x in range(int((9-a)/2)):
        print(" ", end="")
    for x in range(a):
        print("*",end="")
    for x in range(int((9-a)/2)):
        print(" ", end="")
    print()
    a+=2
input()
