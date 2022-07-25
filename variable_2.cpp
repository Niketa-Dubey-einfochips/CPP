#include<iostream>
using namespace std;
class Good
{
    public:
    static int a;//static variable
    int b; //instance variable
//public:
   int func()
    {
       int c = 20; // local variable
        // A variable defined within a block or method or constructor is called a local variable.

        cout<< c<< "address of a "<<&a<<endl;
    }
};
int Good::a;
int main()
{
    Good g1;
    g1.func();
   // int a = g1.get Good();

}