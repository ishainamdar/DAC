#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"size"<<endl;
    cin>>n;
    int arr[n];
    int sum=0;
    int avg=0;

    for(int i=0;i<n;i++){
        cout<<"Enter elements"<<i<<endl;
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
        if(arr[i]<=min){
            min=arr[i];
        }
        sum=sum+arr[i];
    }
    cout<<"Max element is "<<max<<" and Min element is"<<min<<endl;
    cout<<"Sum of element is "<<sum<<endl;
    avg=sum/n;
    cout<<"Avg of element is "<<avg<<endl;
}