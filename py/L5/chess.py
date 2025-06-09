tabuleiro=[]
inimigo=0
a=0
b=0
c=0
d=0
for j in range(8):
    p=[int(x) for x in input().split()]
    tabuleiro.append(p)

x,y=map(int, input().split())
tabuleiro[x][y]=1
for i in range(8):
    if tabuleiro[x][i]==2:
        for j in range(i+1,x):
            if tabuleiro[x][j]!=1:
                a=1
            else:
                break
        for j in range(x,i+x):
            if tabuleiro[x][j]!=1:
                b=1
            else:
                break
for i in range(8):
    if tabuleiro[y][i]==2:
        for j in range(i+1,y):
            if tabuleiro[j][y]!=1:
                c=1
            else:
                break
        for j in range(y,i+y):
            if tabuleiro[j][y]!=1:
                d=1
            else:
                break

print(a+b+c+d)
