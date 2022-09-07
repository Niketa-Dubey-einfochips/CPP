#include<iostream>
#include<functional>
#include<string>
using namespace std;
class Base
{
    public:
    string str = " hello";
    private:
    int i=3;
    Base(int i)
    {
       // cout<<"value of the i is "<<i<<endl;
    }


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