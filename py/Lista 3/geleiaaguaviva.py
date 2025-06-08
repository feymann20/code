N=int(input())
t=0
g=0
for i in range(N):
    a=0
    a=int(input())
    if a==10:
        t+=a
    if a==11:
        g+=a
if g>=t:
    print("Geleia")
else:
    print("Tradicional")
