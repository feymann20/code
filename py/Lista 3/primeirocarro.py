m,p=input().split()
m=int(m)
p=float(p)
a=0
N=0
b=-1
for i in range(m):
    N=float(input())
    a=a+N
    if b==-1:
        if (a>=p):
            b=i+1
if b!=-1:
    print(b,f"{a-p:.2f}")
elif b==-1:
    print(0,f"{a:.2f}")
