#include<iostream>
using namespace std;

int main(){
    int num=579;
    int temp=num;
    int sum=0;
    while(temp!=0){
        sum=sum+(temp%10);
        temp/=10;
    }
    cout<<sum<<endl;
}