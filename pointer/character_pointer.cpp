#include<iostream>
using namespace std;
int main()
{
    char c[] = "abc";
    cout<<c<<endl;
    cout<<c[0]<<endl;
    cout<<*c<<endl;
}
/* Operator Overloading. ‘<<‘ operator is overloaded for different types of inputs.
 In the case of const void* overload, it prints just the address. But for const char* overload,
 it starts printing each and every character till it encounters a null character*/