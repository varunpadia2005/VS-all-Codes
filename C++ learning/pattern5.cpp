#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    for(int i=1;i<=n;i++) {
        for(int j=i;j>0;j--){
            cout << j << " ";
        }
        cout << "\n";
    }
}