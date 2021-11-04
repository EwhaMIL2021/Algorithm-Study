N = int(input())
A = list(map(int, input().split()))

dp = [a for a in A]

for i in range(N):
    for j in range(i):
        if A[i] > A[j]:
            dp[i] = max(dp[i], A[i] + dp[j])

print(max(dp))