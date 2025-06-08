N=int(input())
l=list(map(int,input().split()))

aux=[0]*N
aux2=[0]*N
for i in range(0,N):
    aux[i]=l[i]
    if l[N-1]<l[i]:
        l[N-1],l[i]=l[i],l[N-1]
    del l[i]
    l.insert(i,aux[i])
    if l[0]>aux[i]:
        l[0],aux[i]=aux[i],l[0]
    print(*l)
   