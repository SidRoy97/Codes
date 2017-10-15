t = int(input())
a=[]
for i in range (t):
    b = int(input())
    c = 0;
    for j in range (b-1 , 0 , -2):
        c = c + int(((j + j-1)/4))
    a.append(c);
for i in range(t):
    print(a[i])
