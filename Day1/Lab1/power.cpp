#include<iostream>
using namespace std;

int main(){
    int n,m,r;
    r=1;
    cout<<"Enter num "<<endl;
    cin>>m;
    cout<<"Enter power "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        r=r*m;
    }
        cout<<"The ans is "<<r<<endl;
}