N = int(input())
A = list(map(int, input().split()))

dp = [1 for _ in range(N)]

for i in range(N):
    for j in range(i):
        if A[j] > A[i]:  # A[i]보다 큰 값에 대해서만 개수를 센다.
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp))