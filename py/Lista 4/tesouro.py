N=int(input())
l1=[int(x) for x in input().split()]
S=int(input())
b=0
a=0
for i in range(len(l1)):
    if l1[i]>S:
        b=i
        a=1
        break
if a==1:
    print(b)
    print(0)
else:
    print(len(l1))
    print(1)