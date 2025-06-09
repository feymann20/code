tab=[]
q=0
for j in range(7):
    p=[int(x) for x in input().split()]
    tab.append(p)

for i in range(0,7):
    for j in range(i,7):
        q=q+tab[i][j]
print(q)