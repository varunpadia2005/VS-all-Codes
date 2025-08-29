#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
	int n,r,coeff;
	cout << "Enter the value of n & r: ";
	cin >> n;
	cin >> r;
	int f1=factorial(n);
	int f2=factorial(r);
	int f3=factorial(n-r);
	coeff=f1/(f2*f3);
	cout << coeff << " is the coefficient of the above n & r ";
}
int factorial(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
		f*=i;
	return f;
}