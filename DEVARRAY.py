[n,q]= (input()).split(" ")
n = int(n)
q = int(q)

a = input().split(" ")[:n]
ans = []

for i in range(n):
    a[i] = int(a[i])


if(n == 1):
    for j in range(q):
        if(int(input()) == a[0]):
            ans.append("Yes")
        else:
            ans.append("No")
else:
    z = []
    for j in range (min(a),max(a)+1):
        z.append(j)
    for j in range(q):
        if(int(input()) in z):
            ans.append("Yes")
        else:
            ans.append("No")

for i in ans:
    print(i)

