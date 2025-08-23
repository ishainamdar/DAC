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
    int ecnt=0;
    int ocnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ecnt++;
        }
        else{
            ocnt++;
        }
    }
    cout<<"Even numbers count "<<ecnt<<endl;
    cout<<"Odd numbers count "<<ocnt<<endl;
 
}
