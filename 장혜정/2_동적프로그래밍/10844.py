N = int(input())
steps = [0, 1, 1, 1, 1, 1, 1, 1, 1, 1]
for _ in range(1, N):
    tmp = steps[:]
    steps[0] = tmp[1]
    for i in range(1, 9):
        steps[i] = (tmp[i-1] + tmp[i+1])
    steps[9] = tmp[8]
    print(steps)
print(sum(steps)%1000000000)