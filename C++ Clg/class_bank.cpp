#include<iostream>
#include<string>
using namespace std;
class Bankacc
{
    public: 
        string Name;
        int Acc_No;
        string Acc_type;
        int Balance;
        void assignvalue()
        {
            cout << "Enter the Name: ";
            cin >> Name;
            cout << "Enter the Acc_No: ";
            cin >> Acc_No;
            cout << "Enter the Acc_type: ";
            cin >> Acc_type;
            cout << "Enter the Balance: ";
            cin >> Balance;
        }
        void deposit()
        {
            float amount;
            cout << "Enter the amount to deposit: ";
            cin >> amount;
            Balance+=amount;
        }
        void withdraw()
        {
            float amount;
            cout << "Enter the amount to withdraw: ";
            cin >> amount;
            if(Balance>=amount) {
                Balance-=amount;
            } else {
                cout << "Insufficient funds. \n";
            }
        }
        void display()
        {
            cout << "Name: " << Name << "\n";
            cout << "Acc_No.: " << Acc_No << "\n";
            cout << "Acc_type: " << Acc_type << "\n";
            cout << "Balance: " << Balance << "\n";
        }
};
int main()
{
    Bankacc acc;
    int c;
    do
    {
        cout << ".......---Bank Menu---....... \n 0.Exit \n 1.Input Data \n 2.Deposit funds \n 3.Withdraw funds \n 4.Display details \n" << "Enter the choice: ";
        cin >> c;
        switch(c)
        {
            case 0: cout << "Exit....";
                    break;
            case 1: acc.assignvalue();
                    break;
            case 2: acc.deposit();
                    break;
            case 3: acc.withdraw();
                    break;
            case 4: acc.display();
                    break;
            default:cout << "Invalid Input";
        }
    } while(c!=0);
    return 0;
}