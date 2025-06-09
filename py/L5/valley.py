m,n=map(int, input().split())
terreno=[]
a=0
for l in range(m):
    t=[int (x) for x in input().split()]
    terreno.append(t)
s,x=input().split()
x=int(x)-1
s=str(s)
if s=="L":
    for i in range(n):
        a=a+terreno[x][i]
else:
    for i in range(m):
        a=a+terreno[i][x]

print(a)