ilha=[]
for j in range(10):
    terreninho=[str(x) for x in input().split()]
    ilha.append(terreninho)

for i in range(0,10):
    for j in range(0,10):
        if ilha[i][j]=="t":
            if i+1<10:
                if ilha[i+1][j]=="*":
                    ilha[i][j]="p"
            if j+1<10: 
                if ilha[i][j+1]=="*":
                    ilha[i][j]="p"
            if i-1>=0:
                if ilha[i-1][j]=="*":
                    ilha[i][j]="p" 
            if j-1>=0:
                if ilha[i][j-1]=="*":
                    ilha[i][j]="p"
for l in range(10):
   for c in range(10):
       print(ilha[l][c], end=" ")
   print()
