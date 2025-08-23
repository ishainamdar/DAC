#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int rev=0;
    int temp=num;
    while(temp!=0){
        rev=rev*10+(temp%10);
        temp=temp/10;
    }
    cout<<"Reverse of number "<<num<<" is "<<rev<<endl;
}