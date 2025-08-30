// pending

#include <iostream>
using namespace std;

template <class T>
class MyStack
{

private:
    int msize;
    T arr[5];
    int top;

public:
    MyStack()
    {
        this->top = -1;
    };
    void push(T val)
    {
        if (top == 4)
            cout << "Stack Overflow!" << endl;
        else
            arr[++top] = val;
    };
    void pop() {
        if (top == -1)
            cout << "Stack Underflow!" << endl;
        else
            cout << arr[top--] << " popped" << endl;
    };
    T peek(){
        return arr[top];
    }
    void display()
        {
            if (top == -1){
                cout << "Stack is empty" << endl;
            }
            else
            {
                cout << "Stack: ";
                for (int i = 0; i <= top; i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
        }
    };

    int main()
    {
        int ch;
        int num;
        MyStack<int> obj;
        do
        {
            cout << "Enter choice" << endl;
            cout << "1.push elements" << endl;
            cout << "2.pop elements" << endl;
            cout << "3.display" << endl;
            cout << "4.peek" << endl;
            cout << "5.exit" << endl;
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << "ENter element" << endl;
                cin >> num;
                obj.push(num);
                break;
            case 2:
                obj.pop();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                cout<<obj.peek()<<endl; 
                break;
            case 5:
                cout << "exit";
                ch = 5;
                break;
            default:
                break;
            }
        } while (ch != 5);
    }