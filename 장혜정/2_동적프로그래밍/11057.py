N = int(input())
steps = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
for _ in range(1, N):
    tmp = steps[:]
    for i in range(9):
        tmp[i] = sum(steps[i:])
    steps = tmp[:]
print(sum(steps)%10007)