f=open("article.txt","r")
a=f.readlines()
group=[]
for x in range(len(a)):
    a[x]=a[x].replace(".","")
    a[x]=a[x].replace(",","")
    a[x]=a[x].replace('"',"")
    a[x]=a[x].replace("\n","")
    a[x]=a[x].replace("-","")
    group+=a[x].split()
wording=""
grow=[[0 for _ in range(2)] for _ in range(52)]
alphabet=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
for x in range(52):
    grow[x][0]=alphabet[x]
for x in group:
    wording=wording+x
for c in wording:
    if c.isalpha()==True:
        grow[alphabet.index(c)][1]+=1
new=[]
r=1
while r<=51:
    for i in range(51):
        if grow[i][1]>grow[i+1][1]:
            t=grow[i];v=grow[i+1];grow[i]=v;grow[i+1]=t
        i+=1
    i=1
    r+=1
for x in range(52):
    print(grow[x][0],":",grow[x][1])
