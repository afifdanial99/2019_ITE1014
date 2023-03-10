import time
x=time.time()
for i in range(0,200):
    print('*', end='')
y=time.time()
print()
print("{} seconds consumed".format(y-x))

x_1=time.time()
s=''
for i in range(0, 200):
    s+='*'
print(s)
y_1=time.time()
print()
print("{} seconds consumed".format(y_1-x_1))
