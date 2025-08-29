#include<iostream>
#include<string>
using namespace std;
class Complex
{
    public:
    float x,y;
    void input(float r, float i)
    {
        x=r;
        y=i;
    }
    void show()
    {
        cout << x << " + ";
        cout << y;
    }
    friend Complex add(Complex c1, Complex c2);
};
Complex add(Complex c1, Complex c2)
{
    Complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.input(3.1,5.65);
    c2.input(2.75,1.2);
    c3=add(c1,c2);
    c3.show();
}