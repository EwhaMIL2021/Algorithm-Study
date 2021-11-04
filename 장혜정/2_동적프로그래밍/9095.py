T = int(input())
for _ in range(T):
    a,b,c = 0,0,1
    for i in range(int(input())):
        a,b,c=b,c,a+b+c
    print(c)