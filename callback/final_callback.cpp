#include<iostream>
#include<functional>
#include<string>
#include<vector>
using namespace std;
typedef std::function<void(std :: string, std::function<void(void)>)> Printcallback;
//class B;
class A
{
   public:
    void print(const std::string& msg,  std::function<void(void)> donecb_a)
    {
        cout<<"A::ENTER "<<endl;
        cout<<"printing A "<<msg<<endl;
        donecb_a();
        std::cout<<"A::EXIT "<<endl;
    }
    Printcallback getprintcb()
    {
        return (std::bind(&A::print,this,std::placeholders::_1,std::placeholders::_2));
    }
};
class B
{
    public:
    Printcallback n_printcb;
    B(Printcallback cb) : n_printcb(cb)
    {
        
     }
    void print(const std::string& msg,  std::function<void(void)> donecb)
    {
        std::cout<<"B::ENTER " <<endl;
        auto donecb_b = std::bind(&B::printdone,this,donecb);
        n_printcb(msg,donecb_b);    
        std::cout<<"B::EXIT " <<endl;
    }
    void printdone(std::function<void(void)>donecb)
    {
        std::cout<<"B::enter " <<endl;
        donecb();
        std::cout<<"B::exit " <<endl;    
    }
    Printcallback getprintcb_b()
    {
        return (std::bind(&B::print,this,std::placeholders::_1,std::placeholders::_2));
    }
};
class C
{
    public:
    Printcallback m_printcb;
    C( Printcallback Printcb):m_printcb(Printcb)
    {
            
    }
    void print(const std::string& msg)
    {
        std::cout<<"C::ENTER " <<endl;
        auto donecb = std::bind(&C::printdone,this);
        m_printcb(msg,donecb);
        std::cout<<"C::EXIT " <<endl;
   }
    void printdone()
    {
        std::cout<<"C::enter " <<endl;
        std::cout<<"C::exit " <<endl;
    }
};
int main()
{
    A a;  
    auto fptr = a.getprintcb();
    B b(fptr); 
    auto fptr1=b.getprintcb_b();
    C c(fptr1);  
    c.print("niketa"); 
}



    
