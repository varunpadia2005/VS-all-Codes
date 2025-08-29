#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value to check prime no. : ";
    cin >> n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout << "Non Prime. ";
            break;
        } else {
            cout << "Prime. ";
            break;
        }
    }
}
