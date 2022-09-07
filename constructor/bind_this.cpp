#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
class bond
{
    public:
    int k, l;
    bond()
    {
        cout<<"default \n"<<endl;
    }
    bond(int i ,int j)
    {
        k=i;
        l=j;
    }

    void setcall()
    {
        cout<<"value of the first is \n"<<k<<endl;
        cout<<"value of the second is \n"<<l<<endl;

    }

};

int main()
{
   bond d1;
   //auto 
    auto f2 = bind(&bond::setcall,&d1);
    f2(1,2);
    return 0;

}