#include<iostream>
#include<functional>
using namespace std;
class Base
{
    public:
    Base( int a)// 
    {
        
        cout<<"base constructor\n"<<a<<endl;

    }
 virtual ~Base()
    {
        cout<<"base Destructor\n"<<endl;

    }

};

class Base_1
{
    public:
    Base_1( int a)// 
    {
        
        cout<<"base constructor_1\n"<<a<<endl;

    }
 virtual ~Base_1()
    {
        cout<<"base Destructor\n"<<endl;

    }

};

class Derived:public Base, public Base_1 
{
public:
     Derived(int x, int y):Base(x),Base_1(y)
     {
         cout<<"derived constuctor\n"<<endl;
     }
    ~ Derived()
    {
        cout<<"derived destructor\n"<<endl;
    }
};

int main()
{
   // Base(2);
    Base*b = new Derived(3,4);
    delete b;
}

