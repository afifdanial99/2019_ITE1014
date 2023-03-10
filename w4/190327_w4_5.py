h=int(input())
print("*"*(2*h-1))
a=h-1
b=1
total=2*h-1
while a>=1:
    print("*"*a, " "*b,"*"*a,sep='', end="")
    print()
    total+=2*a
    b+=2
    a-=1
b-=4
a=2
while a<=h-1:
    print("*"*a, " "*b,"*"*a,sep='', end="")
    print()
    total+=2*a
    b-=2
    a+=1
print("*"*(2*h-1))
total+=2*h-1
print(total)
