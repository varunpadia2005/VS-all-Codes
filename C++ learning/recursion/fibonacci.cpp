#include<iostream>
using namespace std;
int fibonacci(int n);
int main()
{
    int n;
    cout << "Enter the no.: ";
    cin >> n;
    cout << "fibonacci no. are: \n " << fibonacci(n);;
}
int fibonacci(int n)
{
    if(n==0 || n==1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);    
}