n,m=map(int,input().split())
a=0
b=0
snake=[]
for i in range(0,n,1):
    cobrita=[int(x) for x in input().split()]
    snake.append(cobrita)
for i in range(0,n,1):
    if i%2==0:
        for j in range(0,m,1):
            a=a+snake[i][j]
            print(snake[i][j])
    if i%2!=0:
        for j in range(m-1,-1,-1):
            b=b+snake[i][j]
            print(snake[i][j])
if a+b>0:
    print(a+b)
else:
    print(0)