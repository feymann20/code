d=False
a=False
w=False
s=False
nI=0
tabuleiro=[]
for j in range (8):
    p=[int(x) for x in input().split()]
    tabuleiro.append(p)

x,y=map(int,input().split())
tabuleiro[x][y]=1
i=7
while(i>=0):
    indice=tabuleiro[x][i]
    if i < y and not a:
        if indice==2:
            nI+=1
            a=True
        if indice==1:
            a=True
    indice=tabuleiro[i][y]
    if i < x and not w:
        if indice==2:
            nI+=1
            w=True
        if indice==1:
            w=True
    i-=1
i=0
while(i<8):
    indice=tabuleiro[x][i]
    if i > y and not d:
        if indice==2:
            nI+=1
            d=True
        if indice==1:
            d=True
    indice=tabuleiro[i][y]
    if i > x and not s:
        if indice==2:
            nI+=1
            s=True
        if indice==1:
            s=True
    i+=1

print(nI)        