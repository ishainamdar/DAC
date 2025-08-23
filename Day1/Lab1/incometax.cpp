#include<iostream>
using namespace std;

int main(){
    float income;
    cout<<"Enter income "<<endl;
    cin>>income;
    if(income<150000){
        cout<<"No Tax"<<endl;
    }
    else if(income>150000 && income<300000){
        cout<<"20% Tax"<<endl;
    }
    else{
        cout<<"30% Tax"<<endl;
    }
}