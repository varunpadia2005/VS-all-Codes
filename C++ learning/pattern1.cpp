#include<iostream>
using namespace std;
int main ()
{
    int n,p=1;
    cout << "Enter the number of lines: ";
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            cout << " " << p << " ";
            p++;
        }
        cout << "\n";
    }
}