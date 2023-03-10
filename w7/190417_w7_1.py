import random
game="yes"
while game!="no":
    print("S T A R T")
    group=set()
    while len(group)<3:
        group.add(random.randint(0,9))
    group=list(group)
    print(group)
    solution=int(group[0])*100+int(group[1])*10+int(group[2])
    answer=-11
    while answer!=solution:
        print("==========================")
        print()
        print("Guess numbers (000 ~ 999):")
        answer=input()
        p=list(str(answer))
        p[0]=int(p[0]);p[1]=int(p[1]);p[2]=int(p[2]);
        strike=0
        ball=0
        if p[0]==group[0]:
            strike+=1
        if p[1]==group[1]:
            strike+=1
        if p[2]==group[2]:
            strike+=1
        ball+=group.count(p[0])
        ball+=group.count(p[1])
        ball+=group.count(p[2])
        ball-=strike
        print(strike, "strike,", ball, "ball.")
        if strike==3:
            print("Yes! The secret number is ", '"',solution,'"! You have won!',sep='')
            print()
            game=input("Do you want to play again? (yes or no)")
            break
    print()
