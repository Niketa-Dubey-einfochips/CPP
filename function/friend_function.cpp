#include<iostream>
using namespace std;
//a Friend Function that is a "friend" of a given class is
//allowed access to private and protected data in that class.
/*
Friend function can be declared either in public or private part of the class.
• It is not a member of the class so it cannot be called using the object.
• Usually, it has the objects as arguments.*/

class numbers
{
    int num1, num2;
    public:
        void setdata(int a , int b);
        friend int add(numbers N);
};
void numbers::setdata(int a , int b)
{
    num1= a ;
    num2 = b;

}

int add(numbers N)
{
    return(N.num1+N.num2);

}

int main()
{
    numbers N1;
    N1.setdata(10,20);
    cout<<"sum = "<<add(N1);
    return 0;
}