#include<iostream>
using namespace std;

class Point{
    public:
    
    int x,y;
    Point(){
        cout<<"In default constructor"<<endl;
    }
    Point(int x,int y){
        this->x=x;
        this->y=y;
       
    }
    int getx(){
        return x;
    }
    void setx(int x){
        this->x=x;
    }

    int gety(){
        return y;
    }
    void sety(int y){
        this->y=y;
    }
    void display(){
        cout<<"Point x : "<<x<<endl;
        cout<<"Point y : "<<y<<endl;
        
    }
};
int main(){
    Point p;
    Point p1(10,20);
    p1.display();
    p1.getx();
    p1.sety(30);
    p1.display();
    
}