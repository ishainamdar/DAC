#include<iostream>
using namespace std;

class BankAccount{

    int accno;
    string customername;
    double balance;
    public:
    BankAccount(){
        cout<<"Default Constructor"<<endl;
    }
    BankAccount(int accno,string customername,double balance){
        this->accno=accno;
        this->customername=customername;
        this->balance=balance;
    }

    public:
    void withdraw(double amt){
        this->balance=balance-amt;
        cout<<"Amount : "<<amt<<" is withdraw"<<endl;
        cout<<"new balance is "<<balance<<endl;
    }
    void deposit(double amt){
        this->balance=balance+amt;
        cout<<"Amount : "<<amt<<"is deposit"<<endl;
        cout<<"new balance is "<<balance<<endl;
    }
};
int main(){
    BankAccount b(101,"John",522000.50);
    b.withdraw(500.70);
    b.deposit(1000);

}