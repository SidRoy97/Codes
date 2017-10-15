n=int(input())
array=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
string=""
for i in range(0,n):
    s=input()
    ch1=s[0]
    k=array.index(ch1)
    if(k<=13):
        string=string+str(k)+" "
    else:
        string=string+str(k-26)+" "
    ch2=""
    for j in range(1,len(s)):
        ch2=s[j]
        if(array.index(ch2)>array.index(ch1)):
            diff1=array.index(ch2)-array.index(ch1)
            diff2=((array.index(ch1)+1)+(25-array.index(ch2)))*-1
        else:
            diff1=((array.index(ch2)+1)+(25-array.index(ch1)))
            diff2=(array.index(ch1)-array.index(ch2))*-1
        if(abs(diff1)<abs(diff2) or diff1==13):
            string=string+str(diff1)+" "
        else:
            string=string+str(diff2)+" "
        ch1=ch2  
    print(string)
    string=""
    
    
