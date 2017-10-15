t = int(input())
x=[]
for i in range (t):
    s = (input())
    [(a),(b)] = (s.split(" "))
    x.append((int(a))%(int(b)))
for i in range(t):
    print(x[i])
    
