#include<iostream>
using namespace std;

int main(){
    int num;
    int fact=1;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    for(int i=num;i>=1;i--){
        fact=fact*i;
    }
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;
}