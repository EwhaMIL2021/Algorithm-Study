n = int(input())

count = 0
for x in range(n%2, n+1, 2):
    y = (n-x)//2
    count += factorial(x+y)//(factorial(x)*factorial(y))

print(count%10007)