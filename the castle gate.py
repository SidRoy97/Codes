t=int(input())
arr1=[]
arr2=[]
arr3=[]
c=0
summ=0
prod=1
flag=0
for k in range(0,t):
    n=int(input())
    count=0
    for i in range(1,(n+1)):
        for j in range(1,(n+1)):
            summ=i+j
            prod=i*j
            for m in range(0,len(arr1)):
                if(arr1[m]==summ):
                    for g in range(0,len(arr2)):
                        if((arr2[g]==prod)and(g==m)):
                            flag=1
            if(flag==0):
                c=i^j
                if((c<=n)and(c>0)):
                    arr1.append(summ)
                    arr2.append(prod)
                    count=count+1
            flag=0
    arr3.append(count)
    arr1=[]
    arr2=[]
for k in range(0,t):
    print(arr3[k])
