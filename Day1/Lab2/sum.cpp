#include<iostream>
using namespace std;

int main(){
    int a;
    int sum=0;
    cout<<"Enter number "<<endl;
    cin>>a;
    while(a>=0){
        sum=sum+a;
        cin>>a;
    }
    cout<<"Sum is "<<sum<<endl;
}