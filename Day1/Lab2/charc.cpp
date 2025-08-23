#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter character"<<endl;
    cin>>ch;
    int n=ch;
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        cout<<(char)(n+i)<<endl;
    }
    

}