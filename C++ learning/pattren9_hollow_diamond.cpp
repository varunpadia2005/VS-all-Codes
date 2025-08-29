#include<iostream>
using namespace std;
int main()
{
    int n,a=0;
    cout << "Enter the size for pattern: ";
    cin >> n;
    for(int k=0;k<n;k++) 
    {
        for(int j=n;j>k+1;j--)
                cout << " ";
        for(int i=0;i<1;i++)
            cout << "*";
        for(int l=0;l<a;l++)
            cout << " ";
        a=(k*2)+1;
        if(k>0)
        {
            for(int m=0;m<1;m++)
                cout << "*";
        }  
        cout << "\n";
    }
    for(int k=n;k>1;k--) 
    {
        for(int j=k;j<=n;j++)
                cout << " ";
        for(int i=0;i<1;i++)
            cout << "*";
        a=((k-2)*2)-1;
        for(int l=0;l<a;l++)
            cout << " ";
        if(k>2 && k<=n)
        {
            for(int m=0;m<1;m++)
                cout << "*";
        }
        cout << "\n";
    }
}