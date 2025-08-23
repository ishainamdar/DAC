#include<iostream>
using namespace std;

int main(){
    int num;
    int cnt=0;
    cout<<"Enter the num "<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        cout<<"The number "<<num<<" is prime"<<endl;
    }
    else{
        cout<<"The number "<<num<<" is not prime"<<endl;
    }
}