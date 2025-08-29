p=1
s=0
n=int(input("Enter the number of elements you want to keep in the list"))
a=[]
for i in range(n):
    x=int(input("Enter the number to add in the list"))
    a.append(x)
for i in a:
    if(i%2==0):
        s+=i
for i in a:
    if(i%2!=0):
        p*=i
print("So sum of even number are ",s)
print("So product of odd number are ",p)
