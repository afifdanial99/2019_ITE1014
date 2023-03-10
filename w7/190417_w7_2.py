N=int(input())
print("-------- start -------")
a=1
while a<=N:
    n=0
    g=str(a)
    g=list(g)
    n+=g.count("3")
    n+=g.count("6")
    n+=g.count("9")
    if n==0:
        print(a)
    else:
        print("clap "*n)
    a+=1
