a=[]
n=int(input())
s=input()
length=len(s)
s2=""
sum=0
for i in range(0,length):
        if(s[i]!=" "):
                s2=s2+s[i]
        else:
                sum=sum+int(s2)
                s2=""
sum=sum+int(s2)
print(sum)

