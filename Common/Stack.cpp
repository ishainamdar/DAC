#include<iostream>
using namespace std;
class MyStack{
    public: int cnt=0;
        int size;
        int arr[4];
        int num;
    public:MyStack(int size){
        this->size=size;
        arr[size];
    }
    public:
        void pop(){
            cout<<"In pop"<<endl;
            arr[cnt]=0;
            cnt--;
        }
        void push(){
            cout<<"In push"<<endl;
            if(cnt>size){
                cout<<"Stack is full"<<endl;
            }
            else{
                cin>>num;
                arr[cnt]=num;
                cnt++;
            }
            
        }
        void display(){
            if(cnt==0){
                cout<<"Stack is empty "<<endl;
            }
            else{
                for(int i=0;i<cnt;i++){
                cout<<arr[i]<<endl;
            }
            }
            
        }

};
int main(){
        int ch;
        MyStack s(3);
    do{
        cout<<"Enter choice"<<endl;
        cout<<"1.push elements"<<endl;
        cout<<"2.pop elements"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            cout<<"exit";
            ch=4;
            break;
        default:
            break;
        }
    }while(ch!=4);
}