#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,i;
    cout << "Enter the number: ";
    cin >> n;
    a=0;
    b=1;
    cout << "0" << "\n";
    cout << "1" << "\n";
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout << c << "\n";
    }
}