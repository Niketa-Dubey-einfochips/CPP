#include<iostream>
using namespace std;
class point
{
    public:
    int x= 10;
    int *ptr = &x;
   // int x= 10;
    //ptr = &x;
    int get(){
  cout<<"Value of Var " <<*ptr<<endl;
    }
    int ptrget()
    {
        cout<<"add of x is " <<ptr<<endl;
    }

};
int main()
{
    point p1;
    p1.get();
    p1.ptrget();
}