n=int(input())
e=0
for i in range(0,n):
    s=input()
    a=[]
    b=[]
    flag=0
    flag1=flag2=0
    count=0
    for j in range(len(s)):
        if(s[j]=='B'):
            a.append(j)
        else:
            b.append(j)
    if(len(a)==0 or len(b)==0):
        flag=1
    else:
        for k in range(len(a)-1):
            if((a[k+1]-a[k]-1)%2==0):
                flag1=1
        for k in range(len(b)-1):
            if((b[k+1]-b[k]-1)%2==0):
                flag2=1
        if(flag1==1 and flag2==1):
            flag=1
    if(flag==1 and (len(a)%2==0 and len(b)%2==0)):
        e=e+1
print(e)
            
