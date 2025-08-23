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
    int num;
    bool flag=false;
    cout<<"enter num"<<endl;
    cin>>num;
    for(int i=0;i<n;i++){

        if(num == arr[i]){
            flag = true;
            break;
        }
        else{
            flag=false;
            //break;
        }
    }
    if(flag == true){
        cout<<"Number is present"<<endl;
    }
    else{
        cout<<"Number is not present"<<endl;
    }
}
    