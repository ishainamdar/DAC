#include<iostream>
using namespace std;

class Employee{
private:
    string name;
    double salary;
    int id;
    double HRA,pf,pt;
    double gross,medical;
    double netsal;

public:
    Employee(){
        cout<<"In Default Constructor"<<endl;
    }
    Employee(string name,double salary,int id,int medical){
        this->name=name;
        this->salary=salary;
        this->id=id;
        this->medical=medical;
        HRA=(0.05*salary);
        pf=(0.12*salary);
        pt=200;
    }

    void display(){

        gross=salary+HRA+medical;
        netsal=gross-(pt+pf);
        cout << "Name : " << name << endl;   
        cout << "id : " << id<< endl;
        cout << "Gross salary : " << gross<< endl;
        cout << "Net salary : " << netsal<< endl;
    }
};
int main(){
    Employee emp1;
    Employee emp2("Isha",50000,301,2000);
    emp2.display();
   
}