a=int(input("Enter 1st number "));
b=int(input("Enter 2nd number "));
c=int(input("Enter 3rd number "));
d=int(input("Enter 4th number "));
e=int(input("Enter 5th number "));
s=a+b+c+d+e;
p=s*100/500;
print("Total marks ",s," Percentage ",p);
if p>=80:
      print("Grade A ");
elif p>=60:
      print("Grade B ");
elif p>=40:
      print("Grade C ");
else:
      print("Grade D ");
