//remaining
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"size"<<endl;
    cin>>n;
    int arr[n];
    

    for(int i=0;i<n;i++){
        cout<<"Enter elements"<<i<<endl;
        cin>>arr[i];
    }
    int cnt;
    int temp;
    for(int i=0;i<n;i++){
        cnt=0;
        temp=arr[i];
        for(int j=i;j<n;j++){
            if(arr[j]==temp){
                cnt++;
            }
        }
        cout<<"count of ele "<<temp<<" is"<<cnt<<endl;
    }
}