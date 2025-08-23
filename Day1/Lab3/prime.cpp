#include<iostream>
using namespace std;

int main(){
    int num;
    int cnt=0;
    cout<<"Enter the num "<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){      
        if(i%j==0){
            cnt++;
        }
        
        }
        if(cnt==2){
            cout<<"The number "<<i<<" is prime"<<endl;

        } 
        cnt=0;
    }
    
}