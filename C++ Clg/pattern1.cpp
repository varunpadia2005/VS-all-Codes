#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the lenght of the pattern: ";
    cin >> n;
    for(int k=0;k<n;k++) 
    {
        for(int j=0;j<k;j++)
                cout << " ";
        for(int i=n-k;i>0;i--)
            cout << i;
        cout << "\n";
    }
    return 0;
}