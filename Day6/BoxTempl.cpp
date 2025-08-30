#include<iostream>
using namespace std;

template<class T>
class Box{
    T a;
    public:Box(T a){
        this->a=a;
    }
    T getValue(){
        return a;
    }
    void setValue(T a){
        this->a=a;
    }
};

int main(){
    int x=10;
    int c;
    Box b(x);
    c=b.getValue();
    cout<<c<<endl;
    b.setValue(20);
    c=b.getValue();
    cout<<c<<endl;


}