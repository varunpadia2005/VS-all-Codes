n=int(input("Enter the number "));
r=0;
e=n;
while(n>0):
    r=(r*10)+n%10;
    n=n//10;
if r==e:
     print("It is a palindrom number");
else: 
     print("It is not a palindrom number");
