n = int(input())
a, b = 0, 1
for i in range(n):
    a, b = b, (a*2+b)%10007
print(b)