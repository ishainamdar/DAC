#include<iostream>
using namespace std;

template<class T>
void swapfun(T &a,T &b){ //&->to change org values
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int num1=10;
    int num2=20;
    cout<<num1<<" "<<num2<<endl;
    swapfun(num1,num2);
    cout<<num1<<" "<<num2<<endl;
    string str1="abc";
    string str2="def";
    cout<<str1<<" "<<str2<<endl;
    swapfun(str1,str2);
    cout<<str1<<" "<<str2<<endl;
    double d1=2.5;
    double d2=3.5;
    cout<<d1<<" "<<d2<<endl;
    swapfun(d1,d2);
    cout<<d1<<" "<<d2<<endl;
}