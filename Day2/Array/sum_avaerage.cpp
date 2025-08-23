#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of students"<<endl;
    cin>>n;
    int arr[n];
    int sum=0;
    int avg;

    for(int i=1;i<=n;i++){
        cout<<"Enter marks"<<i<<endl;
        cin>>arr[i];
        sum = sum + arr[i];
     
    }
    cout<<"sum = "<<sum;
    avg=sum/n;
    cout<<"avg = "<<avg;
}