n=int(input())
a=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
b=[]
str=""
for i in range(0,n):
    s=input()
    length=len(s)
    j=0
    while(j!=length):
        sum=a.index(s[j])+a.index(s[length-j-1])
        if(sum<25):
            str=str+a[(sum+1)]
        else:
            str=str+a[sum-25]
        j=j+1
    b.append(str)
    str=""
    sum=0
for i in range(0,len(b)):
    print(b[i])
    
