#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the num "<<endl;
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    cout<<"sum of series is "<<sum<<endl;
}