#include<iostream>
using namespace std;

class book
{
    public:
    int num1 , num2, *p;
    book()
    {
        p= new int;//constructor
    }
    book(book &d)
    {
        num1 = d.num1;
        num2 = d.num2;
        p = new int;
        *p =*(d.p);
        //this is why we are writing manually
        //copiying the data
    }
   // void display();
    void getvalues(int a, int b, int c)
    {
        num1 = a;
        num2 = b;
        *p = c;
    }
    void display()
    {
        cout<<"num1\n"<<num1<<"\n"<<"num2\n"<<num2<<"\n"<<"*p\n"<<*p<<endl;
    }
};
int main()
{
    book obj1;
    obj1.getvalues(10,20,40);
    obj1.display();

    book obj2 = obj1;
    obj2.getvalues(1,2,3);
    obj2.display();
    return 0;
    //this require copy constructor to work like this
//so we need deep copy 
//since we are copying data from one object to another so there will be two objects
//therefoe & just refer to existing object 
}