N=int(input())
l1=list(map(int,input().split()))
M=int(input())
a=M
for i in range(len(l1)):
    if l1[i]==0:
        continue
    if l1[i]==1:
        a=M
    if l1[i]!=0 and l1[i]!=1:
        a=a-l1[i]
        if a<=0:
            a==0
            break
if a>0:
    print("Yes, you can")
else:
    print("You Died")