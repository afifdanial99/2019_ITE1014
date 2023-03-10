f=open('article.txt', 'r')
group=[]
a=f.readlines()
for x in range(len(a)):
	print(a[x], end="")
f.close()