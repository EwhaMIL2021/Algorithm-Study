# 2-1 : 1330
A ,B = map(int,input().split())

if A>B:
    print('>')
elif A<B:
    print('<')
elif A==B:
    print('==')
    
    
# 2-3 : 2753

year = int(input())
assert (year>=1)&(year<=4000)
if ((year%4)==0)&((year%100)!=0)|((year%4)==0)&((year%400)==0):
    print('1')
else: print('0')
