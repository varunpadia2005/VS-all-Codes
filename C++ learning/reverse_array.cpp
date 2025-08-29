#include<iostream>
void reverse_array(int arr[],int n);
void print_array(int arr[],int n);
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
    std :: cout << "Array before reversing " << std :: endl;
    print_array(arr,n);
    reverse_array(arr,n);
    std :: cout << "Array after reversing " << std :: endl;
    print_array(arr,n);
}
void reverse_array(int arr[],int n)
{
    for(int i=0;i<=n/2;i++)
    {
        std :: swap(arr[i],arr[n-i]);
    }
}
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        std :: cout << arr[i];
    }
    std :: cout << std :: endl;
}