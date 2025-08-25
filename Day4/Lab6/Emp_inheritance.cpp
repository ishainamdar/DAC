#include <iostream>
using namespace std;

class Employee
{
    protected:
    double basicSal;
    int id, depid;
    string name;
    
public:
    Employee(){

    }
    Employee(int id, int depid, string name, double basicSal)
    {
        this->id = id;
        this->depid = depid;
        this->name = name;
        this->basicSal = basicSal;
    }
    double computeNetSal(){
        return basicSal;
    }
    void display(){
        cout<<"Id :"<<id<<endl;
        cout<<"Name :"<<name<<endl;;
        cout<<"Depid :"<<depid<<endl;;
        cout<<"Basicsal :"<<basicSal<<endl;;
    }
    
};

class Manager : public Employee
{
    double perfBonus;
public:
    Manager(int id, int depid, string name, double basicSal,double perfBonus):Employee(id,depid,name,basicSal)
    {
        this->perfBonus=perfBonus;
    }
    double computeNetSal(){
        return basicSal+perfBonus;
    }
};
class Worker : public Employee
{
    int hoursworked;
    int hourlyRate;
    public:
    Worker(int id, int depid, string name, double basicSal,int hoursworked,int hourlyRate):Employee(id,depid,name,basicSal){
        this->hoursworked=hoursworked;
        this->hourlyRate=hourlyRate;
    }
    double computeNetSal(){
        return basicSal+(hourlyRate*hoursworked);
    }
    int getHourlyWorked(){
        return hoursworked;
    }
};
int main()
{
    
    Employee* emp[2];

    // Manager m(100,103,"Isha",5000,3000);
    // Worker w(100,12,"Riya",40000,5,20);

    int ch=0;
    double sal;
    do{
        cout<<"Emter choice"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"Hire Manager"<<endl;     
        // sal=m.computeNetSal();
        emp[0]= new Manager(100,103,"Isha",5000,3000);
        sal=emp[0]->computeNetSal();
        cout<<"Salary"<<sal<<endl;
        break;
    case 2:
    cout<<"Hire Worker"<<endl;     
        //sal=w.computeNetSal();
        emp[1]= new Worker(100,12,"Riya",40000,5,20);
        sal=emp[1]->computeNetSal();
        cout<<"Salary"<<sal<<endl;
        break;
    case 3:
    cout << "\n--- Employee Details ---\n";
                for(int i=0; i<2; i++) {
                    emp[i]->display();
                }
                break;
    case 4:
    cout<<"exit"<<endl;
    default:
        break;
    }
    }while(ch!=4);
    
}