t=int(input())
swap=0
str=[]
for i in range(0,t):
    n=int(input())
    array=input()
    str.append(array)
for i in range(0,t):
    arr=[]
    for k in range(0,len(str[i])):
        if(k==0):
            arr.append(array[k])
        else:
            if(array[k]==" "):
                arr.append(array[k+1])
    for a in range(0,len(str[i])):
        for b in range(0,len(arr)-a-1):
            if(arr[b]<arr[b+1]):
                swap=arr[b]
                arr[b]=arr[b+1]
                arr[b+1]=swap
    for c in range(0,len(arr)):
        print(arr[c],end='')
    print()
