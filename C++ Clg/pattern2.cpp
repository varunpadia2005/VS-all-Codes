#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size for pattern: ";
    cin >> n;
    for(int k=0;k<n;k++) 
    {
        for(int j=n;j>k;j--)
                cout << " ";
        for(int i=0;i<=k;i++)
            cout << "* ";
        cout << "\n";
    }
    return 0;
}