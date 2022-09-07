#include<iostream>
#include<functional>
using namespace std;
class A 
{
    public:
    auto setcallback_A()
    {
        auto func= std::bind(&A::printfunc,this,std::placeholders::_1,std::placeholders::_2);
       
               return func;
    }
    auto getcallback_A()
    {
       return setcallback_A(); 
    }
    void printfunc(string str, std::function<void(void)>workdonecb_A)
    {
        cout<<str;
        workdonecb_A();
    }
};

class B
{ 
    public:
 std::function<void(std::string , std::function<void(void)>)> m_doPrint_b;
    auto getcallback_b()
    {
        A *ptr;
       m_doPrint_b = ptr->getcallback_A();
    }
    B (A * ptr)
    {
        m_doPrint_b= ptr->getcallback_A();
    }
   //std::function<void(std::string , std::function<void(void)>)> m_doPrint;    
};

class C 
{  

    public:

    std::function<void(std::string , std::function<void(void)>)> m_doPrint;

    C(B *ptr1)
    {

        cout<<"hello"<<endl;
        // std::function<void(std::string , std::function<void(void)>)>funcptr;
       // C * funcptr ;
      m_doPrint =  ptr1->getcallback_b( );
    }  
    void DoPrint()
    {
        auto workdone = std::bind(&C::workdonecb_c,this);
        m_doPrint("hi", workdone);
       // auto func = std::bind(&m_doPrint);
    }
    void workdonecb_c()
    {
       // auto func = std::bind(&m_doPrint);
        cout <<"workDone"<<endl;
    }
};

int main()
{
    A *ptr ;
    B *ptr1;
   // B b(ptr);
    C c(ptr1);
    B b(ptr);
    c.DoPrint();
}


