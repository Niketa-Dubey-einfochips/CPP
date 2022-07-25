#include<iostream>
using namespace std;
extern int n;
extern void hello();
int main()
{
    cout<<"value of n is "<<n<<endl;
    hello();
}
//use different storage class in appropriate situation
//1. econimise the memory space consumed by the variables.
//2. improve the speed of the execution of the program.