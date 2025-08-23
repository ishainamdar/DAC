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
    if(rev==num){
        cout<<num<<" is palindrome ";
    }
    else{
        cout<<num<<" is not palindrome ";
    }
}