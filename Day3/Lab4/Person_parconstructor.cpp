#include<iostream>
using namespace std;

class Person{
public:
    string name,city;
    int age;

    Person(){
        cout<<"In Default Constructor"<<endl;
    }
    Person(string name,string city,int age){
        this->name=name;
        this->city=city;
        this->age=age;
    }

    string getName(){
        return name;
    }
    void setName(string name){
        this->name=name;
    }
    string getCity(){
        return city;
    }
    void setCity(string city){
        this->city=city;
    }
    int getAge(){
        return age;
    }
    void setAge(int age){
        this->age=age;
    }

    void display(){
        cout << "Name : " << name << endl;
        cout << "City : " << city<< endl;
        cout << "Age : " << age<< endl;
    }
};
int main(){
    Person p1;
    Person p("Isha","Pune",21);
    p.display();
    p.getAge();
    p.setCity("Mumbai");
    p.setName("Riya");
    p.display();
    
}