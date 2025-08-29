n=int(input("Enter the number of elements you want to keep in the list"))
a=[]
for i in range(n):
    x=int(input("Enter the number to add in the list"))
    a.append(x)
y=int(input("Enter the number of which frequency is to be found"))
print("The number you entered is there in ",a.count(y))

    
