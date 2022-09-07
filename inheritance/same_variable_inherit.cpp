#include<iostream>
#include<functional>
using namespace std;
class Base
{
    public:

    int i=3;
    // Base(int i)
    // {
    //    // cout<<"value of the i is "<<i<<endl;
    // }


};

class Base_1
{
    public:
    int i=5;
    // Base_1(int i)
    // {
    //    // cout<<"value of the i in the base_1 is "<<i<<endl;
    // }
};

class Derived: public Base, public Base_1 
{
public:
int x,i;
Derived()
{
    cout<<"value of x is"<<x<<"value of the y is "<<endl;
    cout<<"value of the i is "<<i<<endl;
}

};

class D : public Derived
{
   

};

int main()
{
   // Base(2);
//    Base b1;
//   cout<< b1.i;
//    Base_1 b2;
//   cout<< b2.i;

Base *a;
Derived d;
a= &d;
cout<<"_________________-"<<endl;
cout<<a->i;

Base_1 *b;
b = & d;
cout<<"_______________________-"<<endl;
cout<<b->i;


 // Derived d1(2,3);
 // Derived d2(3,4);
  // d1.
//   D *d = new D;
//  d->i=2;
//   Derived* pc = dynamic_cast<Derived*>(d);
//   pc->i=3


 

//     Base*b = new Derived();
// Derived
    //delete b;
}