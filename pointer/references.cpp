#include<iostream>
using namespace std;
//reference to already exist variable 
//write to that memory address instead like pointers to point the value of the address
// void increment (int* value)
// {

//    (*value)++; //increment first then dereference
//    //want to change the value not the address so Use *
// }
void increment (int &value)
{

   value++; //increment first then dereference
   //want to change the value not the address so Use *
}

//references can do what pointer do
//when use refrence then initialization is required 
//we cant assigne another value to reference variable

int main()
{
    int a=5;
    //increment(&a);
    increment(a);
    //int *b = &a;
    //int& ref = a;//& is part of the type not reference
   // ref = 2;
    cout<<a;

}