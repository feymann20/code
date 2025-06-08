n=int(input())
lv=1

a=0

for i in range(n):
    x,q=input().split()
    q=int(q)
    x=str(x)
    if x=="t":
        lv+=q
        if lv>=5:
            a=1
            print("Aventura concluida")
            break
    if x=="m":
        a=1
    if x=="m":
        print("Combate iniciado")
        if lv>=q:
            lv+=1
            print("VITORIA")
            if lv>=5:
                print("Aventura concluida")
                break

        else:
            print("Derrota! Fim da aventura")
            break
    if x == "b":
        if lv-q <=0:
            lv=0
        else:
            lv-=q

if lv<5 and a==0:

    if lv>=5:
        print("Aventura concluida")
if lv<5:
    print()