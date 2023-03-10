n = int(input())

lists = [[0 for _ in range(n)] for _ in range(n)]
#n의 개수에 해당하는 리스트를 n개 만든다.(nXn 크기의 평면좌표)

count = 1
d = 1
limit = n

i, j = 0, -1

while True:
    for _ in range(limit):
        j += d

        lists[i][j] = count
        count += 1

    limit -= 1

    if limit < 0:
        break

    for _ in range(limit):
        i += d
        lists[i][j] = count
        count += 1

    d = -d

for j in range(n):
    print(' '.join(map(str, lists[j])))
