#include<iostream>
using namespace std;

int main(){
    int n;
    int amt;
    int sum=0;
    cout<<"Enter choice"<<endl;
        cout<<"1.Margerita -280"<<endl;
        cout<<"2.Paneer Tandoori-290"<<endl;
        cout<<"3.Italian-380"<<endl;
        cout<<"4.Exit"<<endl;
    
    do{
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Margerita ordered...."<<endl;
            amt=280;
            break;
        case 2:
            cout<<"Panner Tandoori ordered...."<<endl;
            amt=290;
            break;
        case 3:
            cout<<"Italian ordered...."<<endl;
            amt=380;
            break;
        case 4:
            cout<<"exit"<<endl;
            cout<<sum<<endl;
            n=0;
            break;
        
        default:
            break;
        }
        sum=sum+amt;
    }
    while(n!=0);
}