#include<iostream>
using namespace std;
int prime(int n);
int main()
{
	int n,p;
	cout << "Enter the number: ";
	cin >> n;
	p=prime(n);
	if(p==2)
		cout << n << " is the prime number.";
	else
		cout << n << " is not the prime number.";
}
int prime(int n)
{
	int c=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	return c;
}