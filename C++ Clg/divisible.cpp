#include<iostream>
using namespace std;
void divisible();
int main()
{
    divisible();
}
void divisible()
{
    for(int i=1;i<100;i++)
    {
        if(i%35==0)
            cout << i << " is divisible by 5 & 7 \n";
    }
}