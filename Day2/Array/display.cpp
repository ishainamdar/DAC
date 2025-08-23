#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter elements"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i]<<" ";
        
    }


}