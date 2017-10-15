[n, q] = list(map(int, (input().split(" "))))
    
inputs = []

for _ in range(n):
    inputs.append(list(map(int, (input().split(" ")))))

# print(inputs)

elvis = []
elvis_flag = 0
t = 0

kevin = []
kevin_flag = 0
kevin_t = 1

for _ in range(q):
    x = int(input())

    if(elvis_flag == 0):
        flag = 1
        
        while((t < n) and (flag)):

            if(elvis == []):
                elvis += inputs[t]
            else:
                if(max(elvis) > x):
                    flag = 0
                else:
                    elvis_temp = []
                    for i in elvis:
                        elvis_temp.append(i + inputs[t][0])
                        elvis_temp.append(i + inputs[t][1])
                    elvis = elvis_temp
                
            if(max(elvis) > x):
                flag = 0
            t += 2

        if(t >= n):
            elvis_flag = 1 #No need to compute elvis compulsory sums again

        if(flag == 0):
            #print("x = ", x)
            #print("elvis = ", elvis)
            #print("elvisFlag = ", elvis_flag)
            print("NO")
            continue
    else:
        if(max(elvis) > x):
            #print("x = ", x)
            #print("elvis = ", elvis)
            #print("elvisFlag = ", elvis_flag)
            print("NO")
            continue

    #print("x = ", x)
    #print("elvis = ", elvis)
    #print("elvisFlag = ", elvis_flag)
    #print("I'm here.....Ready to check if Kevin can join")

    elvis.sort()
    all_elvis_valid = True
    i = 0

    while((i < len(elvis) and (all_elvis_valid))):
        surplus = x - elvis[i]
        
        #print("surplus : ", surplus)    
        # Can i form this surplus by any combination of odd indexed inputs(the packets that kevin get)
        
        if(kevin_flag == 0):
            while((kevin_t <= (n - 1))):
                if(kevin == []):
                    kevin += (inputs[kevin_t])
                    #print(kevin)
                else:
                    if(all((z > surplus) for z in kevin)):
                        all_elvis_valid = False
                        break
                    else:
                        kevin_temp = []
                        for k in kevin:
                            kevin_temp.append(k + inputs[kevin_t][0])
                            kevin_temp.append(k + inputs[kevin_t][1])

                        kevin = kevin_temp

                if(all((z > surplus) for z in kevin)):
                        all_elvis_valid = False
                        kevin_t += 2
                        break
                
                kevin_t += 2

            if(kevin_t > (n-1)):
                kevin_flag = 1
                
            if(surplus not in kevin):
                all_elvis_valid = False
            
        else:
            if(surplus not in kevin):
                all_elvis_valid = False

        i += 1

    if(i == len(elvis)):
        print("YES")
    else:
        print("NO")
    
