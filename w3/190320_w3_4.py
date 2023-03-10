import random
import time
print("******* START *******")
n=1
while n<=3:
    a=random.randint(0,9)
    b=random.randint(0,9)
    c=random.randint(0,9)
    d=random.randint(0,9)
    answer=(a*b)+c-d
    print(a,"*",b,"+",c,"-",d,"= ?")
    i=1
    while i<=3:
        print(i, end=', ', flush=True)
        time.sleep(1)
        i+=1
    ans=int(input(":"))
    if ans==answer:
        print("Correct Answer")
    else:
        print("Wrong Answer,",a,"*",b,"+",c,"-",d,"=",answer)
    n+=1
