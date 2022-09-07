#include<iostream>
using namespace std;
class constr
{
    public:
        int i , j;
    constr()
    {
        i=0;
        j=0;
        cout<<"default\n";
    }
    constr(int x,int y)
    {
        i=x;
        j=y;
    }
    void display()
    {
        cout<<"value of i is \n"<<i<<endl;
        cout<<"value of the j is \n"<<j<<endl;

    }

};

int main()
{
    constr obj1;
    constr obj2(10,50);
    obj1.display();
    obj2.display();
    return 0;
}