#include<iostream>
using namespace std;

class Book{
    public:
    string bname,author;
    int id,price;


    Book(){
        cout<<"In default constructor"<<endl;
    }
    Book(string bname,int id,string author,int price){
        this->bname=bname;
        this->id=id;
        this->author=author;
        this->price=price;
    }
    string getbname(){
        return bname;
    }
    void setbname(string bname){
        this->bname=bname;
    }

    int getid(){
        return id;
    }
    void setid(int id){
        this->id=id;
    }
    string getAuthor(){
        return author;
    }
    void setAuthor(string author){
        this->author=author;
    }
    int getprice(){
        return price;
    }
    void setPrice(int price){
        this->price=price;
    }
    void display(){
        cout<<"Book Name : "<<bname<<endl;
        cout<<"Book id : "<<id<<endl;
        cout<<"Book Author : "<<author<<endl;
        cout<<"Book Price : "<<price<<endl;
    }
};
int main(){
    Book b;
    Book b1("C",100,"Denis",250);
    b1.display();
    b1.getAuthor();
    b1.setAuthor("Denis Ritche");
    b1.display();
}