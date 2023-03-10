import random

def game():
    global a
    global b
    global ans
    q=input()
    user=10
    if q=='rock':
        user=1#'rock'
    elif q=='paper':
        user=2#'paper'
    else:
        user=3#'scissors'
    n=random.randint(0,2)
    if n==0:
        x=1#'rock'
    elif n==1:
        x=2#'paper'
    else:
        x=3#'scissors'

    if user==1 and x==2:
        print('You Lose!')
        b+=1
    elif user==1 and x==3:
        print('You Win!')
        a+=1
    elif user==2 and x==3:
        print('You Lose!')
        b+=1
    elif user==2 and x==1:
        print('You Win!')
        a+=1
    elif user==3 and x==1:
        print('You Lose!')
        b+=1
    elif user==3 and x==2:
        print('You Win!')
        a+=1
    else: print("Draw!")
    print("again?")
    ans=input()
#main
a=0 #사용자 이긴 횟수
b=0 #컴퓨터 이긴 횟수
x=10
ans=''
game()
z=1
while z!=10:
    game()
    if ans=="no":
        print(a,":",b)
        break
