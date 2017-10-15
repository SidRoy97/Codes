n=int(input())
arr=[]
finstr=""
count=0
index=0
for i in range(0,n):
    str2=input()
    length2=len(str2)
    if(i>=1):
        for k in range(0,len(finstr)):
            if(str2[0]==finstr[k]):
                index=k
                count=1
                break
        while((count!=0)and((index+count)<len(finstr))and(count<len(str2))):
            if(str2[count]==finstr[index+count]):
                count=count+1
            else:
                break
        finstr=finstr+str2[count:length2]
    else:
        finstr=finstr+str2
    print(finstr)
    print(count)
    count=0
print(len(finstr))
            
                    
    
