s,n=map(int,input().split())
l1=[0]*n
for i in range(s):
    P=int(input())
    for j in range(n):
        if j%P==0:
            l1[j]=1
print(*l1)

