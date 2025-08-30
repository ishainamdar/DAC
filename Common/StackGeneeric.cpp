//pending

#include<iostream>
using namespace std;

template<class T>
class MyStack{
    
    private:int msize;
            T* mBuff;
            int mTop;
    public:
        MyStack();
        void push(T);
        T* pop();
        ~MyStack();
};

int main(){
    int ch;
    int num;
    MyStack<int> obj;  
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
            cout<<"ENter element"<<endl;
            cin>>num;
            obj.push(num);
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            //.display();
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