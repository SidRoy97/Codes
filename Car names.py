n=int(input())
for i in range(0,n):
    s=input()
    count1=0
    count2=0
    flag=1
    ch=s[0]
    prevcount=0
    arr=[]
    for j in range(0,len(s)):
        if(s[j]!=ch and ((s[j] not in arr) and flag==1)):
            if(count1==0):
                count1=count1+1
                prevcount=count2
            elif(prevcount==count2):
                count1=count1+1
            else:
                flag=0
            arr.append(ch)
            count2=0
            ch=s[j]
        elif((s[j] in arr) and flag!=1):
            flag=0
        count2=count2+1
    if(flag==1 and count1==2 and count2==prevcount):
        print("OK")
    else:
        print("Not OK")
