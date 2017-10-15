test=int(input())
count=[]
sum=0
a=[]
for i in range(0,test):
    n=input()
    for j in range(0,len(n)):
        ch=n[j]
        if(ch=='B'):
            count.append(j)
    if(len(count)!=0):
        if(count[0]<=2):
            sum=sum+count[0]
        else:
            sum=sum+2
        for k in range(0,len(count)-1):
            if(((count[k+1]-count[k])-1)<=4):
                sum=sum+((count[k+1]-count[k])-1)
            else:
                sum=sum+4
        if((len(n)-(count[len(count)-1]+1))<=2):
            sum=sum+(len(n)-(count[len(count)-1]+1))
        else:
            sum=sum+2
        a.append(sum)
        sum=0
        count=[]
    else:
        a.append(0)
for l in range(0,len(a)):
    print(a[l])
    
            
