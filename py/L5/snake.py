n,m=input().split()
n=int(n)
m=int(m)
a=0
snake=[]
for i in range(n):
    x=[int(x) for x in input().split()]
    snake.append(x)
for i in range(n):
    if i%2==0:
        for j in range(m):
            a=a+snake[i][j]
        
    if i%2!=0:
        for j in range(m-1,-1,-1):
            a=a+snake[i][j]

print(a)
