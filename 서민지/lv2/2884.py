H,M = map(int, input().split())

if ((H == 0) and (M<45)):
    new_H = 23
    new_M = 15+M

elif ((H!=0) and (M<45)):
    new_H = H-1
    new_M = 15+M
    
else:
    new_H = H
    new_M = M-45
    
print(new_H, new_M, sep=' ')
