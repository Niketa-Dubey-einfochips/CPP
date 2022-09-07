#include<iostream>
using namespace std;
class book
{
    public:
    int num1 , num2;
    void display();
    void getvalues(int a, int b);
};
int main()
{
    book obj1;
    obj1.getvalues(10,20);
   /* demo obj2;
    obj2 = obj1; in this assignment operator is doing the copy
    */
    book obj2 = obj1;//copy constructor is copying the data 
    //for that we do'nt need to write code manually , compiler writes the code and this is called shallow copy
    //shallow copy is easy we do not need to copy the code
    // when we will write the code for copying objects manually then it is going to be deep copy
    
    //
}