#include<iostream>
using namespace std;
int main()
{
    int n,a=0;
    cout << "Enter the size for pattern: ";
    cin >> n;
    for(int k=n;k>0;k--) 
    {
        for(int i=k;i<=n;i++)
            cout << "*";
        a=((k-1)*2);
        for(int l=0;l<a;l++)
            cout << " ";
        for(int m=k;m<=n;m++)
            cout << "*";
        cout << "\n";
    }
    for(int k=0;k<n;k++) 
    {
        for(int i=k;i<n;i++)
            cout << "*";
        a=(k*2);
        for(int l=0;l<a;l++)
            cout << " ";
        for(int m=k;m<n;m++)
            cout << "*";
        cout << "\n";
    }
}