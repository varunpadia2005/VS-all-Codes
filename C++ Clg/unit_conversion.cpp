#include<iostream>
using namespace std;
class DB;
class DM
{
    public: 
        float dist_m,dist_cm;
        void input(float dm, float dcm)
        {
            dist_m=dm;
            dist_cm=dcm;
        }
        void show()
        {
            cout << dist_m << " m  ";
            cout << dist_cm << " cm";
        }
        friend DM sum_m_cm(DM ob1,DB ob2);
};
class DB
{
    public: 
        float dist_foot,dist_inch;
        void input(float df,float din)
        {
            dist_foot=df;
            dist_inch=din;
        }
        void show()
        {
            cout << dist_foot << " foot  ";
            cout << dist_inch << " inch";
        }
        friend DB sum_f_in(DM ob1,DB ob2);
};
DM sum_m_cm(DM ob1,DB ob2)
{
    DM temp1;
    temp1.dist_m=ob1.dist_m+((ob2.dist_foot)*0.3048);
    temp1.dist_cm=ob1.dist_cm+((ob2.dist_inch)*2.54);
    return temp1;
}
DB sum_f_in(DM ob1,DB ob2)
{
    DB temp2;
    temp2.dist_foot=((ob1.dist_m)*3.28)+ob2.dist_foot;
    temp2.dist_inch=((ob1.dist_cm)*0.394)+ob2.dist_inch;
    return temp2;
}
int main()
{
    int c;
    DM ob1,ans1;
    DB ob2,ans2;
    ob1.input(100,50);
    ob2.input(6,5);
    ob1.show();
    cout << "\n";
    ob2.show();
    cout << "\n";
    cout << "Enter your choice: \n1.Get the result in m & cm \t\t 2.Get the result in feet & inch. \n";
    cin >> c;
    if(c==1) {
        ans1=sum_m_cm(ob1,ob2);
        ans1.show();
    } else if(c==2) {
        ans2=sum_f_in(ob1,ob2);
        ans2.show();
    }
}
