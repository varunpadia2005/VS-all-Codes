#include<iostream>
using namespace std;
int main()
{
    int n,f;
    cout << "Eter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the values of the array one by one \n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "The majority element of an array is: ";
    for(int i=0;i<n;i++)
    {
        f=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                f++;
        }
        if(f>=n/2)
        {
            cout << arr[i];
            break;
        }
    }
}