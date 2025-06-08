E,P=map(int,input().split())
a=0
b=0
for i in range(P):
    E=E-P
    P=P-1
    if E<=0 and a==0:
        a=1
        b=i+1
        break
if a==1:
    print(b)
else:
    print("F")