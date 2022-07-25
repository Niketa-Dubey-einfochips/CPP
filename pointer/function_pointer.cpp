#include<iostream>
using namespace std;
/*function pointers that point to functions. The address of a function is stored in a function pointer.
 We use function pointers for several tasks. One example is to prevent code redundancy, 
 We don’t use function pointers to allocate or de-allocate memory as we do with normal pointers
 A function pointer, like a data pointer, can be supplied as an argument and returned from a function

*/

int add(int x , int y)  
{  
    return x+y;  
}  
int main()  
{  
 int (*funcptr)(int,int);  // Declaration of function pointer
 funcptr=add; // In this case we are pointing to the add function  

 int sum=funcptr(7,10);  
 std::cout << "Sum=" <<sum<< std::endl;  
  return 0;  
}