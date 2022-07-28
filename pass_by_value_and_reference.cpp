/*References are used to refer an existing variable in another name whereas pointers are used to store address of variable.

References cannot have a null value assigned but pointer can.

A reference variable can be referenced by pass by value whereas a pointer can be referenced by pass by reference.

A reference must be initialized on declaration while it is not necessary in case of pointer.

A reference shares the same memory address with the original variable but also takes up some space on the stack whereas a pointer has its own memory address and size on the stack

*/
#include<iostream>
using namespace std;

class ref_n
{
    public:
    int *x , *y;
    void func_1(int *a , int *b)
    {
        *x=*b;
        *y=*x;
    }
    void display_1()
    {
        cout<<"value of a is  :"<<*x<<"value of b is : "<<*y<<endl;
    }



};

class ref
{
    public:
    int x,y;
    void func(int a , int b)
    {
        y=b;
        x=b;

        
    }
    void display()
    {
        cout<<"value of a is  :"<<x<<"value of b is : "<<y<<endl;
    }


};

int main()
{
    // ref r1;
    // r1.func(4,5);
    // r1.display();
    ref_n n1;
    int a= 20;
    int b = 30;
    n1.func_1(a , b);
    n1.display_1();
    return 0;
}