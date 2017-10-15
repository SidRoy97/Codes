n=int(input())
list=input()
q=int(input())
a=[]
b=[]
x=[]
for i in range(0,q):
    str=input()
    x = [int(j) for j in str.split()]
    a.append(x[0])
    b.append(x[1])
y=[int(k) for k in list.split()]
d=dict(y)
for k in y:
    d[k]=d[k]+1
for k in range(0,len(a)):
    if(a[k]==0):
        for e in d:
            if(d[e]<=b[k]):
                print(e)
                break
    else:
        for e in d:
            if(d[e]==b[k]):
                print(e)
                
