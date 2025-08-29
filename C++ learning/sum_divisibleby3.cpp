#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=1; i<=n ;i++)
    {
        if(i%3==0){
            s+=i;
        }
    }
    cout << "The sum of first n numbers divisible by 3 is " << s;
}