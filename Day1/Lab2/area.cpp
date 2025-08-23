#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the shape"<<endl;
    cout<<"1. Triangle"<<endl;
    cout<<"2. Circle"<<endl;
    cout<<"3. Rectangle"<<endl;
    cout<<"4.Exit"<<endl;
    int ch;
    float result=0;
    float l,b,h,r;
    do{
        cout<<"Enter choice"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter l,b,h"<<endl;
            cin>>l>>b>>h;
            result=l*b*h;
            cout<<result<<endl;
            break;
        case 2:
            cout<<"Enter radius"<<endl;
            cin>>r;
            result=3.14*r*r;
            cout<<result<<endl;
            break;
        case 3:
            cout<<"Enter l,b"<<endl;
            cin>>l>>b;
            result=l*b;
            cout<<result<<endl;
            break;
        case 4:
            cout<<"Exit"<<endl;
            ch=0;
        
        default:
            break;
        }
    }while(ch!=0);
    

}