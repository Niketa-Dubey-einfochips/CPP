#include<iostream>
#include<string>
using namespace std;

class sum 
{
    public:
    int a,b; 
    int average(int x , int y)
    {
        return (x+y)/2;
    }
};
int main()
{
    int z;
    sum s ;
   z=  s.average(4,5);
   cout<<"the sum of two numbers "<<"is "<<z<<endl;
    int a; 
    a = 12;
    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;
    bool c;
    cout<<"size of bool "<<sizeof(c)<<endl;
    char d; 
    cout<<"size of char "<<sizeof(d)<<endl;
}
/*
//advantages of variable is 
//they enable one and the same program to execute various sets of data
//declaration of variables
int a1;
int a2 = 6;
float b1;
float b2 = 5.6;
char c1;
char c2 = 'u';
Variables can represent numeric values,
characters, character strings, or memory addresses
// Declaring a single variable
type variable_name

*/