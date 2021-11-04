def op(X):
    res = [X-1] # 1을 뺀다.
    if X%3 == 0:
        # X가 3으로 나누어 떨어지면, 3으로 나눈다.
        res.append(X//3)
    if X%2 == 0:
        # X가 2로 나누어 떨어지면, 2로 나눈다.
        res.append(X//2)
    return res

def sol(N):
    if N == 1:
        return 0

    k = [N]
    res = op(N)
    if 1 in res:
        return 1
    k.append(res)

    while True:
        li = []
        for i in range(len(res)):
            tmp = op(res[i])
            for j in range(len(tmp)):
               li.append(tmp[j])
        res = li
        k.append(res)
        for i in range(1, len(k)):
            if 1 in k[i]:
                return i

N = int(input())
ans = sol(N)
print(ans)