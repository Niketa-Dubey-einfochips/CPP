#include<iostream>
using namespace std;
/*
C++ provides function overloading which allows to use multiple functions
sharing the same name .
*/
void display(int var)
{
    cout<<"integer number  : "<<var<<endl;

}
void display(float var)
{
    cout<<"float number  : "<<var<<endl;
}

void display(int var1 , float var2)
{
    cout<<"integer number  : "<<var1<<endl;
    cout<<"and float number  : "<<var2<<endl;

}
int main()
{
    int a= 5 ; float b =5.5;
    display(a);
    display(b);
    display(a,b);
    return 0;
}