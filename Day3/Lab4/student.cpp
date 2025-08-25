#include<iostream>
using namespace std;

class Student{
public:
    int rollno;
    int marks1,marks2,marks3;
    int total=0;
    int per=0;
    
    void acceptInfo(){
        cout<<"Enter rollno "<<endl;
        cin>>rollno;
        cout<<"Enter marks1 "<<endl;
        cin>>marks1;
        cout<<"Enter marks2 "<<endl;
        cin>>marks2;
        cout<<"Enter marks3 "<<endl;
        cin>>marks3;

        total=marks1+marks2+marks3;
        per=(total*100)/300;


    }
    void display(){
        cout<<"roll no :"<<rollno<<endl;
        cout<<"marks1 :"<<marks1<<endl;
        cout<<"marks2 :"<<marks2<<endl;
        cout<<"marks3 :"<<marks3<<endl;
        cout<<"total :"<<total<<endl;
        cout<<"percent :"<<per<<endl;
    }
};
int main(){
    Student obj;
    obj.acceptInfo();
    obj.display();
}