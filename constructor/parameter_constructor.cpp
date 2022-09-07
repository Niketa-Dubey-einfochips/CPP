#include<iostream>
using namespace std;

class A_done
{
    public:
    int x = 2;
    int a;
    A_done()
    {

    }
    A_done(int i ,int j):a(i+j)
    {
        cout<<a<<endl;
    }


};

int main()
{
    A_done a;
    A_done(1,2);

}