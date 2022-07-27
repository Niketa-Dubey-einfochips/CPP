//Whenever an object is declared as const, it needs to be initialized at the time of declaration.

/*
To create a const pointer, we need to use the const keyword before the pointer's name.
 We cannot change the address of the const pointer after its initialization, 
 which means the pointer will always point to the same address once the pointer is initialized as the const pointer.
 */

/*
the pointer points to the value of a const variable that cannot change.

*/

/*
A const is a constant member function of a class that never changes any class data members, and it also does not call any non-const function.
*/

class AXY
{
    public:
    int a;
    void fun()const
    {
        a=0; // const function cant change its any data member
    }//its readonly function
};
int main()
{
    AXY obj;
    obj.fun();
    return 0;
}