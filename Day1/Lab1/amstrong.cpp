//1^3+5^3+3^3=153
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int temp=num;
    int sum=0;
    int digit=0;
    int cube=0;
    while(temp!=0){
        digit=temp%10;
        cube=digit*digit*digit;
        sum=sum+cube;
        temp=temp/10;
    }
    if(sum==num){
        cout<<num<<" is amstrong number"<<endl;
    }
    else{
        cout<<num<<" is not amstrong number"<<endl;
    }
}