n=5
a=n-1 #띄어쓰기 개수
b=1 #별 개수
line=1
while line<=n:
    while a>0:
        print(' ',end='')
        a-=1
    while b>0:
        print('*', end='')
        b-=1
    print()
    a=n-1-line
    b=2*line+1
    line+=1
