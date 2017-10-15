t = int(input())
x=[]
for i in range (t):
    s = (input())
    x.append((int(s[0])) + int(s[(len(s))-1]))
for i in range (t):
    print(x[i])
