t = int(input())
ans = []

while(t):
    if(int(input())<10):
        ans.append("What an obedient servant you are!")
    else:
        ans.append(-1)
    t = t-1
    
for i in ans:
    print(i)
