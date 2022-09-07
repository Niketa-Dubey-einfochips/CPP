#include<iostream>
#include<functional>
using namespace std;
class A
{
    public:
    int x;

    auto setcallback()
    {
         cout<<"setcallback"<<endl;
         auto func = std::bind(&A::Print,this,std::placeholders::_1,std::placeholders::_2);
         //func("nidhi",PrintDone());
         //func()
         return func;

    }
    auto getcallback()
    {
        return setcallback();
    }
    void Print(string str,std::function<void(void)>workdonecb)
    {

                cout <<str<<endl;
                workdonecb();
                //return x+y;
    }
};

class B
{
    public:

    std::function<void(std::string , std::function<void(void)>)> m_doPrint;

    B(A *ptr)
    {
        cout<<"hello"<<endl;
        m_doPrint =  ptr->getcallback();
    }
   
    void DoPrint()
    {
        auto workdone = std::bind(&B::workdonecb,this);
        m_doPrint("hi", workdone);
       // auto func = std::bind(&m_doPrint);
    }
    void workdonecb()
    {
       // auto func = std::bind(&m_doPrint);
        cout <<"workDone"<<endl;

    }
};

int main()
{
    A obj;
    A *ptr=NULL;
    B b(ptr); 
    //b.m_doPrint() 
    b.DoPrint();

    return 0;
}