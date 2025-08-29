#include <iostream>
using namespace std;
double power(double m, int n=2);
int power(int m, int n);
int main()
{
    int n2,m2,r2;
    double m1,r1;
    cout << "Enter the First Number (M1) : ";
    cin >> m1;
    cout << "Enter the Second Number (M2) : ";
    cin >> m2;
    cout << "Enter the value of Power(N2) : ";
    cin >> n2;
    r1 = power(m1);
    cout << "The First Result = " << r1 << endl;
    r2 = power(m2,n2);
    cout << "The Second Result = " << r2 << endl;
    return 0;
}
double power(double m, int n)
{
    double r=1.0;
    for(int i=0;i<n;i++)
        r*=m;
    return r;
}
int power(int m, int n)
{
    int r=1;
    for(int i=0;i<n;i++)
        r*=m;
    return r;
}