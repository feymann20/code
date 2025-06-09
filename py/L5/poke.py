n,m=input().split()
n=int(n)
m=int(m)
a=0
pokemon=[]
for i in range(n):
    t=[int(x) for x in input().split()]
    pokemon.append(t)  
p=int(input())
for i in range(n):
    for j in range(m):
        if pokemon[i][j]==p:
            a=a+1
  
print(f'Ash pegou {a} pokemon')