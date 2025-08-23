#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter number "<<endl;
    cin>>a;
    if(a%5==0 && a%7==0){
        cout<<"Number "<<a<<" is divisible by 5 and 7"<<endl;
    }
    else{
        cout<<"Number "<<a<<" is not divisible by 5 and 7"<<endl;
    }
}