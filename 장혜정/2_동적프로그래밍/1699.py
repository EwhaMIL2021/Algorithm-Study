N = int(input())
dp = [0 for _ in range(N+1)]

for i in range(1, N+1):
    dp[i] = i
    for j in range(1, i):
        if j*j > i: break
        # min 함수 쓰면 시간 초과 에러 발생 -> if문 사용
        if dp[i] > dp[i-j*j]+1:
            dp[i] = dp[i-j*j]+1

print(dp[N])