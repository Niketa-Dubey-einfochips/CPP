#include<iostream>
using namespace std;

//inline function is used to reduce the function call
//overhead.
class cube 
{
    public:
    int x;
    inline int cude_n(int x)
    {
        return x*x*x;
    }

};

int main()
{
    int y;
    cube c1;
    y=c1.cude_n(10); 
    cout<<"value of y is : "<<y<<endl;
}

/*

Some of the situations inline expansion may not work
1) If a loop, a switch or a goto exists in function body.
2) If function is not returning any value.
3) If function contains static variables.
4) If function is recursive.

*/