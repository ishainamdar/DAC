#include<iostream>
using namespace std;

class Complex{
    public:
    
    int real;
    int img;
    Complex(){
        cout<<"In default constructor"<<endl;
    }
    Complex(int real,int img){
        this->real=real;
        this->img=img;
       
    }
    int getReal(){
        return real;
    }
    void setReal(int real){
        this->real=real;
    }

    int getimg(){
        return img;
    }
    void setimg(int img){
        this->img=img;
    }
    void display(){
        cout<<"Complex number : "<<real<<"+"<<img<<"i"<<endl;
       
        
    }
};
int main(){
    Complex c;
    Complex c1(10,2);
    c1.display();
    c1.getReal();
    c1.setimg(3);
    c1.display();
    
}