str=input("Enter the string")
l=0
u=0
d=0
for ch in str:
    if(ch.islower()):
        l=l+1
    elif(ch.isupper()):
        u=u+1
    elif(ch.isdigit()):
        d=d+1
print(l)
print(u)
print(d)
