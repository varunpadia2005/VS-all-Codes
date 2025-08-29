#include<iostream>
int main()
{
    int n,max,min;
    int *arr;
    std :: cout << "Enter the size of the array: ";
    std :: cin >> n;
    arr=new int[n];
    std :: cout << "Enter the values of the array one by one \n";
    for(int i=0;i<n;i++)
    {
        std :: cin >> arr[i];
    }
    max = min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i]) {
            max=arr[i];
        } else if(min>arr[i]) {
            min=arr[i];
        }
    }
    std :: cout << "Max = " << max << std :: endl;
    std :: cout << "Min = " << min << std :: endl;
}