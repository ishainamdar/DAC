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
    int max=arr[0];
    int max2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
      for(int i=0;i<n;i++){
        if(arr[i]>=max2 && arr[i]<max){
            max2=arr[i];
        }
    }
    cout<<"Max element is "<<max<<" and 2Max element is"<<max2<<endl;
}
