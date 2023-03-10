print("******* START *******")
import random
import time
n=1
while n<=3:
    a=random.randint(0,9)
    b=random.randint(0,9)
    answer=a*b
    print(a,"*",b,"= ?")
    ans=int(input())
    if ans==answer:
        print("Correct Answer")
    else:
        time.sleep(5)
        print("Wrong Answer,",a,"*",b,"=",answer)
    n+=1
