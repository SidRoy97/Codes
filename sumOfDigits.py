t = int(input())
x=[]
for i in range (t):
    s = (input())
    sum = 0
    for j in s:
        sum = sum + int (j) 
    x.append(sum)
for i in range(t):
    print(x[i])
