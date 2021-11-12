dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
num = input()
time = 0

for i in range(len(num)):
    for letters in dial:
        if num[i] in letters: time += (dial.index(letters)+3)

print(time)
