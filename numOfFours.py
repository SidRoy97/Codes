t = int(input())
a=[]
for i in range (t):
    n = int(input())
    count = 0
    while(n):
        if (n%10 == 4):
            count = count + 1
        n = n//10
    a.append(count)
    
for i in range(t):
    print(a[i])
