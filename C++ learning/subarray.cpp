#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout << "Eter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the values of the array one by one \n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "All the sub arrays are: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            for(int k=i;k<=j;k++)
                cout << arr[k];
            cout << " ";
        }
        cout << endl;
    }
}