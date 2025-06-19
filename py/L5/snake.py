n,m=map(int,input().split())
a=0
snake=[]
for _ in range(n): # underline é uma maneira de definir uma variavel morta
    cobrita=[int(x) for x in input().split()]
    snake.append(cobrita)
for i in range(n):
    if i%2==0:
        for j in range(m):
            a=a+snake[i][j]
            if a<0:
                a=0
    else:
        for j in range(m-1,-1,-1):
            a=a+snake[i][j]
            if a<0:
                a=0
print(a)