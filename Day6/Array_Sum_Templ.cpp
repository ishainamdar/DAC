#include<iostream>
using namespace std;


template <class T>
class Arraysum{
public: 
    T sumArray(T arr[],int n){
        T sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    
};
  
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Arraysum <int>c;
    cout<<"sum is "<<c.sumArray(arr,n)<<endl;
}