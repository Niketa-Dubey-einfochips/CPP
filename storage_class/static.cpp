/* Static data member are class members that are declared using static keyword A static member has certain special characteristics These are:

Only one copy of that member is created for the entire class and is shared by all the objects of that class , no matter how many objects are created.
It is initialized to zero when the first object of its class is created .No other initialization is permitted
It is visible only within the class,but its lifetime is the entire program
static member must be explicitly defined outside the class using scope resolution operator.
 ->can also use static in this fashion to prevent a variable from being reinitialized inside a loop.
->a static member variable has the same value in any instance of
 the class and doesn't even require an instance of the class to exist.

 */

#include <iostream>
using namespace std;

class A
{
int x;
public:
A() { cout << "A's constructor called " << endl; }
};

class B
{
static A a;
public:
B() { cout << "B's constructor called " << endl; }
static A getA() { return a; }
};

A B::a; // definition of a
//static member must be explicitly defined outside the class using scope resolution operator.

int main()
{
B b1, b2, b3;
A a = b1.getA();

return 0;
}
//use static storage class if want the value of a variable to persist between different function calls.

//use register storage class for those variables that are being used very often in a program, for faster execution , a typical application of register storage class is loop counters.
//use extern storage class for only those variables that are being used by almost all the functions in a program, this avoids unecessary passing of these variables as arguments when making a function call.
