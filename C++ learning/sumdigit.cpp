#include<iostream>
using namespace std;
int sumdigit(int n);
int main()
{
	int n,s;
	cout << "Enter the number: ";
	cin >> n;
	s=sumdigit(n);
	cout << s << " is the sum of digits of the above number. ";
}
int sumdigit(int n)
{
	int s=0;
	for(int i=n;i>0;i/=10)
		s+=i%10;
	return s;
}