N = int(input())
A = list(map(int, input().split()))

dp_left = [1 for _ in range(N)]
dp_right = [1 for _ in range(N)]
ans = 1

for i in range(N):
    for j in range(i):
        if A[i] > A[j]:
            dp_left[i] = max(dp_left[i], dp_left[j] + 1)

for i in range(N - 1, -1, -1):
    for j in range(N - 1, i, -1):
        if A[i] > A[j]:
            dp_right[i] = max(dp_right[i], dp_right[j] + 1)
    ans = max(ans, dp_left[i] + dp_right[i] - 1)

print(ans)