#include<iostream>
using namespace std;
int main()
{
    int n,target;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the target: ";
    cin >> target;
    int arr[n];
    cout << "Enter the values of the array one by one \n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int i=0,j=n-1;
    while(i<n)
    {
        if(arr[i]+arr[j]==target) {
            cout << "( " << i << " , " << j << " )";
            break;
        } else if(arr[i]+arr[j]>target) {
            j--;
        } else {
            i++;
        }
    }
}