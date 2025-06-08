N=int(input())
l1=[]*N
l1=list(map(int,input().split()))
l2=[]
for i in range(1,8):
    if i in l1:
        l2.append(i)
print(*l2)
if len(l2)==7:
    print("Saia Shenlong e realize o meu desejo")
else:
    print("Nao encontramos todas")
