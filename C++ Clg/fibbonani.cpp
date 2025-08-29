#include<iostream>
using namespace std;
void fibbonaci(int n);
int main()
{
	int n,f;
	cout << "Enter the number: ";
	cin >> n;
	fibbonaci(n);
}
void fibbonaci(int n)
{
	int a=0,b=1,c;
    cout << a << " \n";
    cout << b << " \n";
	for(int i=1;i<n-1;i++)
	{
		c=a+b;
		cout << c << " \n";
		a=b;
		b=c;
	}
}