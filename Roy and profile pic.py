l=int(input())
n=int(input())
s2=[]
for i in range(0,n):
    s=input()
    arr=[]
    arr=s.split()
    if((int(arr[0])<l or int(arr[1])<l)):
        s2.append("UPLOAD ANOTHER")
    elif((int(arr[0])==int(arr[1]))and(int(arr[0])>=l)):
        s2.append("ACCEPTED")
    else:
        s2.append("CROP IT")
for i in range(0,n):
    print(s2[i])
