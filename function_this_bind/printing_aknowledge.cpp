#include<iostream>
#include<functional>

using namespace std;
class A
{
    public:
    int j, k;
   // auto printanything(string str , std::function<void()>workdonecb);
    auto setcallback()
    {
        auto func = std::bind(&printanything ,this , placeholders::_1, placeholders::_2);
        return func;
    }
    auto printanything(string str , std::function<void()>workdonecb)
    {
        cout<<str;
        workdonecb();
    }
};

class B //:public  A 
{
    public:
     auto print();
   // int *printfunptr;
    std::function <void(string str , std::function<void>)> m_doprint;
    B()
    {
        
    }
    B (A *ptr)
    {
        //B obj;
        ptr->A::printanything("hi",print) ;
      // ptr->printanything();
    }
    auto print()
    {
        auto func = std::bind(&B::m_doprint,placeholders::_1, placeholders::_2);

    }

    void workdonecb()
    {
        //std::function<void(int)> workdonecb ;//= std::bind(&B::print);
        cout<<"done";

    }

};

int main()
{



}