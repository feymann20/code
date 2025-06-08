N = int(input())
mortes= list(map(int, input().split()))
max=1000001
mortes1 = [False] * (max)
lista = []
for x in mortes:
    mortes1[x] = True

for i in range(max):
    if mortes1[i]:
        lista.append(i)

print(*lista)