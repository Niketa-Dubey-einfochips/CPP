#include<iostream>
using namespace std;

class Empty { };

int main()
{
Empty a, b;

if (&a == &b)
cout << "impossible " << endl;
else
cout << "Fine " << endl;

return 0;
}
/*Size of an empty class is not zero. 
It is 1 byte generally. It is nonzero to ensure that the 
two different objects will have different addresses.

When structure is introduced in C, that time there is no concept of Object.
 So According to C standard it is decided to keep zero size of empty structure in C programming only. 
 In C++, Size of empty structure/class will be one byte as because to call function at least empty structure should have some size ( minimum 1 byte is required ) i.e. one byte.
The same happens with the Classes as well they must require One byte of memory to make them distinguishable.
*/