#!/usr/bin/env python
# coding: utf-8

# In[1]:


# 1-1 : 2557
print("Hello World!")


# In[4]:


# 1-2 : 10781
for i in range(2):
    print("강한친구 대한육군")


# In[12]:


# 1-3 : 10171
print(
    "\\     /\\""\n" 
    " )   (  \')""\n" 
    "(  /   )""\n" 
     "  \\(___)|""\n"
         )


# In[23]:


# 1-5 : 1000
A ,B = map(int,input().split())
print(A+B)


# 1-9 : 10869
A ,B = map(int,input().split())
print(A+B,A-B,A*B,A // B, A%B, sep='\n')

# 1-11 : 2588
a = int(input())
b = int(input())

num3 = a*(b%10)
num4 = a*((b%100)//10)
num5 = a*(b//100)
num6 = a*b
print(num3,num4,num5,num6, sep ='\n')


