import sys

n = int(sys.stdin.readline())
wine = [int(sys.stdin.readline()) for _ in range(n)]

dp = [0, wine[0]]
if n>1: dp.append(wine[0] + wine[1])
for i in range(3, n+1):
    case1 = dp[i-2] + wine[i-1] # i번째, i-1번째 포도주 선택
    case2 = dp[i-3] + wine[i-2] + wine[i-1] # i번째, i-2번째 포도주 선택
    case3 = dp[i-1] # i번째 포도주 선택x (i-1, i-2번째 포도주 선택)
    dp.append(max(case1, case2, case3))

print(dp[-1])