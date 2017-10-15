test=int(input())
sum1=0
sum2=0
suminer=''
for i in range(0,test):
    n=int(input())
    n2=input()
    for j in range(0,len(n2)):
        if(n2[j]!=' '):
            suminer=suminer+n2[j]
        else:
            sum1=sum1+int(suminer)
        print(suminer)
        suminer=''
    n3=input()
    for k in range(0,len(n3)): 
        if(n3[k]!=' '):
            suminer=suminer+n3[k]
        else:
            sum2=sum2+int(suminer)
        print(suminer)
        suminer=''
    print(sum1)
    print(sum2)
    if(sum1==sum2):
        print("TIE")
    elif(sum1>sum2):
        print("BOB WINS")
    else:
        print("ALICE WINS")
    sum1=sum2=0
