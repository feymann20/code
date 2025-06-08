M=int(input())
N=int(input())
l1=[int(x) for x in input().split()]
l2=[int(b) for b in input().split()]
xp=0
for i in range(len(l1)):
    xp= xp+l1[i]*l2[i]
if xp>=M:
    print("Upou de Nivel!")
else:
    print("Nao foi dessa vez!")
