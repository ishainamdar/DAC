#include<iostream>
using namespace std;

template<class T>
class Calculator{
    public:

    template<class...  Args>    
    T add(Args... args){
        return(args +
            ...);
    } 
    template<class...  Args>  
    T sub(Args... args){
        return(args -
            ...);
    } 
    template<class...  Args>  
    T mul(Args... args){
        return(args *
            ...);
    } 
    T div(T a, T b){
        return a/b;
    } 
};
  
int main(){
    int n1=20;
    int n2=2;
    Calculator <int>c;
    cout<<"add "<<c.add(n1,n2)<<endl;;
    cout<<"sub "<<c.sub(n1,n2)<<endl;
    cout<<"mul "<<c.mul(n1,n2)<<endl;
    cout<<"div "<<c.div(n1,n2)<<endl;
    

    


}