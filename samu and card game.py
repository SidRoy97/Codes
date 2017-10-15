n=int(input())
c=[]
m=[]
e=[]
for i in range(0,n):
    a=[0,0]
    s1=input()
    a=[f(i) for f,i in zip((int,int),s1.split())]
    count=1
    count2=0
    k=int(input())
    b=[0,0]
    p=[0,0]
    for j in range(0,k):
        s2=input()
        d=[f(i) for f,i in zip((int,int),s2.split())]
        f3=0
        f4=0
        if(d[0]<0 and d[1]<0):
            p=[b[0]//abs(d[0]),b[1]//abs(d[1])]
            f3=-1
            f4=-1
        elif(d[0]<0 and d[1]==0):
            p=[b[0]//abs(d[0]),a[1]-0]
            f3=-1
        elif(d[0]<0 and d[1]>0):
            p=[b[0]//abs(d[0]),(a[1]-b[1])//d[1]]
            f3=-1
            f4=1
        elif(d[0]==0 and d[1]<0):
            p=[a[0]-0,b[1]//abs(d[1])]
            f4=-1
        elif(d[0]==0 and d[1]>0):
            p=[a[0]-0,(a[1]-b[1])//d[1]]
            f4=1
        elif(d[0]>0 and d[1]<0):
            p=[(a[0]-b[0])//d[0],b[1]//abs(d[1])]
            f3=1
            f4=-1
        elif(d[0]>0 and d[1]==0):
            p=[(a[0]-b[0])//d[0],a[1]-0]
            f3=1
        elif(d[0]>0 and d[1]>0):
            p=[(a[0]-b[0])//d[0],(a[1]-b[1])//d[1]]
            f3=1
            f4=1
        if(count==1):
            if(d[0]<=a[0] and d[1]<=a[1]):
                b[0]=d[0]
                b[1]=d[1]
            count=0
        if(b[0]==d[0] and b[1]==d[1]):
            if((b[0]+(f3*(min(p)-1)*d[0]))<=a[0] and (b[1]+(f4*(min(p)-1)*d[1]))<=a[1]):
                b[0]=b[0]+(f3*(min(p)-1)*d[0])
                b[1]=b[1]+(f4*(min(p)-1)*d[1])
                m.append(b[0])
                e.append(b[1])
                count2=count2+min(p)-1
        else:
            if((b[0]+(f3*min(p)*d[0]))<=a[0] and (b[1]+(f4*min(p)*d[1]))<=a[1]):
                b[0]=b[0]+(f3*min(p)*d[0])
                b[1]=b[1]+(f4*min(p)*d[1])
                m.append(b[0])
                e.append(b[1])
                count2=count2+min(p)
    c.append(count2)
for i in range(0,len(m)):
    print(m[i],e[i])
for i in range(0,len(c)):
    print(c[i])

