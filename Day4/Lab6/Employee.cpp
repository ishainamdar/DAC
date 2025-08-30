#include <iostream>
using namespace std;

class Employee
{
protected:
    double basicSal;
    int id, depid;
    string name;

public:
    Employee()
    {
    }
    Employee(int id, int depid, string name, double basicSal)
    {
        this->id = id;
        this->depid = depid;
        this->name = name;
        this->basicSal = basicSal;
    }
    virtual double computeNetSal()
    {
        return basicSal;
    }
    void display()
    {
        cout << "Id :" << id << endl;
        cout << "Name :" << name << endl;
        ;
        cout << "Depid :" << depid << endl;
        ;
        cout << "Basicsal :" << basicSal << endl;
        ;
    }
};

class Manager : public Employee
{
    double perfBonus;

public:
    Manager() {};
    Manager(int id, int depid, string name, double basicSal, double perfBonus) : Employee(id, depid, name, basicSal)
    {
        this->perfBonus = perfBonus;
    }
    double computeNetSal()
    {
        return basicSal + perfBonus;
    }
};
class Worker : public Employee
{
    int hoursworked;
    int hourlyRate;

public:
    Worker() {}
    Worker(int id, int depid, string name, double basicSal, int hoursworked, int hourlyRate) : Employee(id, depid, name, basicSal)
    {
        this->hoursworked = hoursworked;
        this->hourlyRate = hourlyRate;
    }
    double computeNetSal()
    {
        return basicSal + (hourlyRate * hoursworked);
    }
    virtual int getHourlyWorked()
    {
        return hoursworked;
    }
};
int main()
{
    int size = 5;
    int index = 0;
    int id;
    int depid;
    string name;
    double basicSal;
    int hoursworked;
    int hourlyRate;
    double perfBonus;
    Employee *emp[size];
    int ch = 0;
    double sal;
    int work;

    do
    {
        cout << "Enter choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Hire Manager" << endl;
            cout << "Enter id,depid,name,sal,perfBonus" << endl;
            cin >> id >> depid >> name >> sal >> perfBonus;
            emp[index] = new Manager(id, depid, name, sal, perfBonus);
            sal = emp[index]->computeNetSal();
            cout << "Salary : " << sal << endl;
            cout << "-----------------------------------------------------" << endl;
            index++;
            break;

        case 2:
        {
            cout << "Hire Worker" << endl;
            cout << "Enter id,depid,name,sal,hourswoed ,hourly rate" << endl;
            cin >> id >> depid >> name >> sal >> hoursworked >> hourlyRate;
            emp[index] = new Worker(id, depid, name, sal, hoursworked, hourlyRate);
            sal = emp[index]->computeNetSal();
            cout << "Salary : " << sal << endl;
            // worker code
            Worker *w = dynamic_cast<Worker *>(emp[index]);
            if (w)
                cout << "Hours Worked : " << w->getHourlyWorked() << endl;
            index++;
            cout << "-----------------------------------------------------" << endl;
            break;
        }
        case 3:
            cout << "\n--- Employee Details ---\n";
            for (int i = 0; i < index; i++)
            {
                cout << "here" << endl;
                emp[i]->Employee::display();
            }
            cout << "-----------------------------------------------------" << endl;
            break;

        case 4:
            cout << "exit" << endl;
            cout << "-----------------------------------------------------" << endl;
            break;

        default:
            break;
        }
    } while (ch != 4);
}