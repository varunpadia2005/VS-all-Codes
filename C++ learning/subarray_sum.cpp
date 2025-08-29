#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cout << "Eter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the values of the array one by one \n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int m=arr[0];
    cout << "The sum of the maximum subarrays are: ";
    for(int i=0;i<n;i++)
    {
        s=0;
        for(int j=i;j<n;j++)
        {
            s+=arr[j];
            if(m<s)
            m=s;
        }
    }
    cout << m;
}