import math

t = int(input())

for _ in range(t):
    ans = 0
    [n, p] = input().split(" ")
    [n, p] = [int(n), int(p)]

    reqd = list(map(int, input().split(" ")))

    packages = []
    
    for i in range(n):
        packages.append(list(map(int, input().split(" "))))

    #print(packages[0][4])
    #first lets clean the packages


    p_copy = p
    i = 0
    while (i < n):
        j = 0
        m = reqd[i]
        while (j < p_copy):
            x = packages[i][j] / m
            y = round((x / round(x)) * 100)
            if(y not in range(90, 111)):
                packages[i].remove(packages[i][j])
                j = j - 1
                p_copy -= 1
            j = j + 1
        i = i + 1

    #print(packages)

    if(n == 1):
        ans = len(packages[0])
    elif(packages[0]):
        kit = []
        for i in range(p):
            amt = packages[0][i]
            kit.append(amt)
            num = (amt)
            l = round((amt * 100) / (reqd[0] * 90), 2)
            u = round((amt * 100) / (reqd[0] * 110), 2)

            print("l = ", l)
            print("u = ", u)

            #lower = ((0.9 * num))
            #upper = ((1.1 * num)) 

            for j in range(1, n):
                #lower_package_amt = (reqd[j] * lower)
                #upper_package_amt = (reqd[j] * upper)

                #print("lower_package_amt : ", lower_package_amt)
                #print("upper_package_amt : ", upper_package_amt)

                possible = []

                for k in packages[j]:
                    l1 = round((k * 100) / (reqd[j] * 90), 2)
                    u1 = round((k * 100) / (reqd[j] * 110), 2)

                    print("l1 = ", l1)
                    print("u1 = ", u1)

                    if((l1 <= l and l1 >= u) or (u1 <= l and u1 >= u)):
                        #print(k)
                        possible.append(k)
                
                if(possible):
                    kit.append(min(possible))
                    packages[j].remove(min(possible))

                if(len(kit) != (1 + j)):
                    break

            if(len(kit) == n):
                ans += 1
            print("KIT : ", kit)
            kit = []

    print(ans)

