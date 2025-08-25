#include<iostream>
using namespace std;

class Date{
    public:
    int dd,mm,yy;

    Date(){
        cout<<"In default constructor"<<endl;
    }
    Date(int dd,int mm,int yy){
        this->dd=dd;
        this->mm=mm;
        this->yy=yy;
    }
    int getDate(){
        return dd;
    }
    void setDate(int dd){
        this->dd=dd;
    }

    int getMonth(){
        return mm;
    }
    void setMonth(int mm){
        this->mm=mm;
    }
    int getYear(){
        return yy;
    }
    void setYear(int yy){
        this->yy=yy;
    }
    void display(){
        cout<<"Date is "<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
};
int main(){
    Date d1;
    Date d(07,01,2004);
    d.display();
    d.setDate(01);
    d.getMonth();
    d.getYear();
    d.display();

}