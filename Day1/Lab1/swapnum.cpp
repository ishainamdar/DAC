#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter num"<<endl;
    cin>>a>>b;
    cout<<"Numbers are "<<a<<" "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"Numbers swaped are "<<a<<" "<<b<<endl;


}