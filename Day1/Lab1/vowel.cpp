#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter letter in lower case"<<endl;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i'||ch=='o'||ch=='u'){
        cout<<ch<<" is vowel"<<endl;
    }
    else{
        cout<<ch<<" is consonant"<<endl;
    }
}