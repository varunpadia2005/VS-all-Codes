#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=1; i<=n ;i++)
    {
        s+=i;
    }
    cout << "The sum of first n odd numbers is " << s;
}