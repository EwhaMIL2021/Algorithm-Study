# 3-1 : 2739
N = int(input())
for i in range(9):
    I = i+1
    print("%d * %d = %d" %(N, I, N*I))
    
    
# 3-4 : 15552
import sys

T = int(input())
for i in range(T):
    A,B = map(int, sys.stdin.readline().split())
    print(A+B)
    


# 3-5 : 2741
N = int(input())

for i in range(N): 
    print(i+1)
    i = i+1
    
    
# 3-7 : 11021
T = int(input())

for i in range(T):
    a,b = map(int,input().split())
    print('Case #%d: %d' %(i+1, a+b))    
