#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n,f;
    cout << "Enter the no.: ";
    cin >> n;
    f=factorial(n);
    cout << "Factorial is " << f;
}
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);    
}