n=int(input())
c=n #원래 n
b=1 #홀수
a=1 #줄 수
n_1=n-2
n_2=2*b-1

print(" "*(n-1),"*"," "*(n-1),sep='')
while a<n-1:

    print(" "*n_1, "*", " "*n_2,"*",sep="")
    n_1-=1
    b+=1
    n_2=2*b-1
    a+=1
print("*"*(2*c-1))
