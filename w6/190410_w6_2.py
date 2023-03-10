f=open("article.txt","r")
a=f.readlines()
group=[]
for x in range(len(a)):
	a[x]=a[x].replace(".","")
	a[x]=a[x].replace(",","")
	a[x]=a[x].replace('"',"")
	a[x]=a[x].replace("-","")
	a[x]=a[x].replace("\n","")
	group+=a[x].split()
counts=dict()
for g in group:
	voca=g.lower()

	if voca in counts:
		counts[voca]+=1
	else:
		counts[voca]=1
total=0
for x in counts:
	print(x,":", counts[x])
	total+=counts[x]
print()
print("Total=", total)