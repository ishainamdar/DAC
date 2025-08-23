#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter all three angles"<<endl;
    cin>>a>>b>>c;
    if((a+b+c)!=180){
        cout<<"Triangle is not valid"<<endl;
    }
    else{
        cout<<"Triangle is valid"<<endl;
    }
}