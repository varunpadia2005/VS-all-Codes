#include<iostream>
#include<string>
using namespace std;
typedef struct Student{
    string Name;
    int ID;
    float Marks;
}Student;
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student arr[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter the details: " << "\n";
        cout << "Enter the student Name: ";
        cin >> arr[i].Name;
        cout << "Enter the student ID: ";
        cin >> arr[i].ID;
        cout << "Enter the student Marks: ";
        cin >> arr[i].Marks;
    }
    for (int i=0;i<n;i++) 
    {
        cout << "The details of " << i+1 << " student \n";
        cout << "  Name: " << arr[i].Name << "\n";
        cout << "  ID: " << arr[i].ID << "\n";
        cout << "  Marks: " << arr[i].Marks << "\n";
    }
}