#include<iostream>
using namespace std;
class   N_Access
{
private:
    int i ;
    float j;

public:
    int set(int x, int y)
    {
         i= x;/* args */
         j = y;
    }
int get ()
{
    return i*j;
}
    //~access();
};
class F_Access : public N_Access
{
    private:
    int a ;
    float b;

public:
    int set(int x, int y)
    {
        i= x;/* args *///cant access private member of the base class
         j = y;
    }


};

int main()
{
    N_Access n1;
    n1.set(2, 5);
    n1.get();

}


