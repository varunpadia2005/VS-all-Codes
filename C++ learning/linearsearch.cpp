#include<iostream>
int main()
{
    int n,k,res=-1;
    std :: cout << "Enter the size of the array: ";
    std :: cin >> n;
    int* arr=new int[n];
    std :: cout << "Enter the values of the array one by one \n";
    for(int i=0;i<n;i++)
    {
        std :: cin >> arr[i];
    }
    std :: cout << "Enter the value to be searched: ";
    std :: cin >> k;
    for(int i=0;i<n;i++)
    {
        if(k==arr[i]) {
            res=i;
        }
    }
    if(res>=0) {
            std :: cout << "Value found at index " << res << std :: endl;
    } else {
        std :: cout << "Value not found." << std :: endl;
    }
}