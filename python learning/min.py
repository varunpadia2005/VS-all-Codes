n=int(input("Enter the number of elements you want to keep in the list"))
a=[]
for i in range(n):
    x=int(input("Enter the number to add in the list"))
    a.append(x)
l=a[0]
for i in range(1,n):
    a[i-1]=a[i]
a[n-1=======================================================]=l
print(a)
