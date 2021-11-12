def swap_letter(x):
    temp = x[2]
    x[2] = x[0]
    x[0] = temp
    
    return int("".join(x))

a,b = map(list, input().split())

A = swap_letter(a)
B = swap_letter(b)

if A>B: print(A)
else: print(B)
