#include <iostream>
using namespace std;

int rollno;
int marks1, marks2, marks3, total;
float per;

void acceptdata()
{
    cout << "Enter rollno : " << endl;
    cin >> rollno;
    cout << "Enter marks1 : " << endl;
    cin >> marks1;
    cout << "Enter marks2 : " << endl;
    cin >> marks2;
    cout << "Enter marks1 : " << endl;
    cin >> marks3;

    total = marks1 + marks2 + marks3;
    per = (total * 100) / 300;
}
void display()
{
    cout << "Roll no : " << rollno << endl;
    cout << "Marks1 : " << marks1 << endl;
    cout << "Marks2 : " << marks2 << endl;
    cout << "Marks3 : " << marks3 << endl;
    cout << "Total : " << total << endl;
    cout << "Percentage : " << per << endl;
    if (per >= 90)
    {
        cout << "Grade A" << endl;
    }
    else if (per >= 80 && per < 90)
    {
        cout << "Grade B" << endl;
    }
    else if (per >= 70 && per < 80)
    {
        cout << "Grade C" << endl;
    }
    else if (per >= 60 && per < 70)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "Grade F" << endl;
    }
}

int main()
{

    acceptdata();
    display();
}