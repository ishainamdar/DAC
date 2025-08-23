#include<iostream>
using namespace std;

inline int area(int side){
    return side*side;
}
inline int area(int len,int br){
    return len*br;
}
inline int area(int radius){
    return 3.15*radius;
}
int main(){
    int sq=area(25);
    int rec=area(20,30);
    int cir=area(4);
}