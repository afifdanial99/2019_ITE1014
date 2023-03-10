def Fibonacci(n):
    a,b=0,1

    while a<n:
        a, b=b,a+b
    print(a)
    print()
n=int(input())
Fibonacci(n)
