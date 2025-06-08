T=int(input())
P=1
a=0
while P!=0:
    P=int(input())
    if P>T and a==0:
        a=1

if a==1:
    print("ALARME")
elif a==0:
    print("O Havai pode dormir tranquilo")
        