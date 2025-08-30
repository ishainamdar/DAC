#include<iostream>
#include<math.h>
using namespace std;


template <class T>
T find_max(T &h,T &i){
    return max(h,i);
}
int main(){
    int a=10;
    int b=20;
    int x=find_max(a,b);
    cout<<x<<endl;
    double c=2.10;
    double d=3.20;
    double y=find_max(c,d);
    cout<<y<<endl;
    char e='A';
    char f='G';
    char z=find_max(e,f);
    cout<<z<<endl;

}