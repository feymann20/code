N,M=map(int,input().split())
total_naves_mortas=0
tp=[]
naves=[]
for _ in range(N):
    inimigo=[int (x) for x in input().split()]
    naves.append(inimigo)
for _ in range(M):
    c1,c2=map(int, input().split())
    tp.append((c1,c2))
for k,l in tp:
    p=0
    nave_morta=0
    i=0
    while(p==0 and i<=k):
        if naves[k-i][l]==1:
            nave_morta=1
            naves[k-i][l]=0
            p=1
        i+=1
    total_naves_mortas=total_naves_mortas+nave_morta
print(total_naves_mortas)
