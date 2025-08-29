#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    if(ch>='a' && ch<='z') {
        cout << "'" << ch << "'" << " is a lower case character.\n";
    } else if(ch>='A' && ch<='Z') {
        cout << "'" << ch << "'" << " is a upper case character.\n";
    } else {
        cout << "'" << ch << "'" << "is not an alphabet character.\n";
    }
}