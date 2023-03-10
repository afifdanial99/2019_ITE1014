n=0
result=0
while n!="exit":
    n=input("operator(+, -, *, /, exit)\n")
    if n=="+":
        print("operand")
        e=int(input())
        result+=e
    elif n=="-":
        print("operand")
        e=int(input())
        result-=e
    elif n=="*":
        print("operand")
        e=int(input())
        result*=e
    elif n=="/":
        print("operand")
        e=int(input())
        result/=e
    else: break
    print("result")
    print("--------------------")
    print(result)
    print("--------------------")
    continue
print("Terminate")
