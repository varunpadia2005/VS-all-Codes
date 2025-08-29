#include<iostream>
using namespace std;
int main()
{
    int n,r=0;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=n;i>0;i/=10)
        r=(r*10)+(i%10);
    if(r==n)
        cout << n << " is the pallindrom number";
    else
        cout << n << " is not the pallindrom number";
}