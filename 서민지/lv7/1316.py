N = int(input())
count = 0
x_list = []

for i in range(N):
    x = input()
    x_list.append(x)
    
for words in x_list:
    for i in range(len(words)):
        if i!=(len(words)-1):
            if words[i] == words[i+1]: pass
            elif words[i] in words[i+1:]: break
        else: count+=1
            
print(count)
