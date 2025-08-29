#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
	int n,f;
	cout << "Enter the number: ";
	cin >> n;
	f=factorial(n);
	cout << f << " is the factorial of the above number: ";
}
int factorial(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
		f*=i;
	return f;
}