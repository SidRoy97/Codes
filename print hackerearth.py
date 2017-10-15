l=int(input())
str=input()
min=0
arr=[0,0,0,0,0,0,0]
arr2=[0,0,0,0,0,0,0]
for i in range(0,l):
    ch=str[i]
    if(ch=="h"):
        arr[0]=arr[0]+1
    elif(ch=="a"):
        arr[1]=arr[1]+1
    elif(ch=="c"):
        arr[2]=arr[2]+1
    elif(ch=="k"):
        arr[3]=arr[3]+1
    elif(ch=="e"):
        arr[4]=arr[4]+1
    elif(ch=="r"):
        arr[5]=arr[5]+1
    elif(ch=="t"):
        arr[6]=arr[6]+1

arr2[0]=arr[0]//2
arr2[1]=arr[1]//2
arr2[2]=arr[2]//1
arr2[3]=arr[3]//1
arr2[4]=arr[4]//2
arr2[5]=arr[5]//2
arr2[6]=arr[6]//1
min=arr2[0]
for j in range(0,7):
    if(min>arr2[j]):
        min=arr2[j]
print(min)
    
