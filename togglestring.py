s=input()
length=len(s)
s2=""
for i in range(0,length):
    if(s[i].islower()):
       s2+=s[i].upper()
    else:
        s2+=s[i].lower()
print(s2)
    
