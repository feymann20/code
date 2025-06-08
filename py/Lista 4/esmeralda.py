N=int(input())
l1=[int(x) for x in input().split()]
c=int(input())
a=0
for i in range(len(l1)):
    if l1[i]==c:
        a=1
        break
if a==1:
    print(l1[i])
else:
    print(-1)
    