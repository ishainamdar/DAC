#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int esum,osum;
    for(int i=1;i<n;i++){
        if(i%2==0){
            esum=esum+i;
        }
        else{
            osum=osum+i;
        }
    }
    cout<<"sum of even numbers is "<<esum<<endl;
    cout<<"sum of odd numbers is "<<osum<<endl;


}