s1=input()
s2=input()
list1=s1.split(" ")
list2=s2.split(" ")
list3=[0,0]
for i in range(0,3):
    if(int(list1[i])>int(list2[i])):
        list3[0]=list3[0]+1
    if(int(list1[i])<int(list2[i])):
        list3[1]=list3[1]+1
print(list3[0],list3[1])
    

    
