#include<iostream>
using namespace std;

template <class T>
class QueueT{

    private:
        int front;
        int rear;
        T arr[5];
    public:
        QueueT(){
            front=-1;
            rear=-1;
        }
    void enqueue(T val){
        if(rear>=4){
            cout<<"Queue is Full"<<endl;
        }
        else{
            front=0;
            arr[++rear]=val;
            cout<<val<<" added "<<endl;
        }
    }
    void dequeue(){
        if(front==-1 && rear==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[rear--];
            cout<<"Element dequed"<<endl;
        }
    }
    T rearfun(){
        return arr[rear];
    }
    string isEmpty(){
        if(front==-1 && rear==-1){
            
            return "Queue is empty";
        }
        else{
            return "Queue is not empty";
        }
    }
    void display(){
        cout<<"Queue eleents are : ";
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){

int ch;
        int num;
        QueueT<int> obj;
        do
        {
            cout << "Enter choice" << endl;
            cout << "1.enqueue elements" << endl;
            cout << "2.dequeue elements" << endl;
            cout << "3.display" << endl;
            cout << "4.rear" << endl;
            cout << "5.isempty" << endl;
            cout << "6.exit" << endl;
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << "ENter element" << endl;
                cin >> num;
                obj.enqueue(num);
                break;
            case 2:
                obj.dequeue();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                cout<<"rear is "<<obj.rearfun()<<endl; 
                break;
            case 5:
                cout<<obj.isEmpty()<<endl;
                break;
            case 6:
                cout << "exit";
                ch = 6;
                break;
            default:
                break;
            }
        } while (ch != 6);
    }