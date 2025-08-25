#include<iostream>
using namespace std;

class Employee{
public:
    string name,dob;
    int id;

    Employee(){
        cout<<"In Default Constructor"<<endl;
    }
    Employee(string name,string dob,int id){
        this->name=name;
        this->dob=dob;
        this->id=id;
    }

    void acceptdata()
{
    cout << "Enter name : " << endl;
    cin >> this->name;
    cout << "Enter id : " << endl;
    cin >> this->id;
    cout << "Enter dob : " << endl;
    cin >> this->dob;
    
}
    void display(){
        cout << "Name : " << name << endl;   
        cout << "id : " << id<< endl;
        cout << "dob : " << dob<< endl;
    }
};
int main(){
    Employee p1;
    Employee p("Isha","1-1-2000",21);
    p.display();
    p.acceptdata();
    p.display();
   
}