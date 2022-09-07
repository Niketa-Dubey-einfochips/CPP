#include<iostream>
#include<functional>
using namespace std;
class A
{
public:
 auto setcallback()
 {
 auto func= std::bind(&A::Doprint,this,std::placeholders::_1,std::placeholders::_2);
 //func("nidhi",printdone);
 return func;
 }
 auto getcallback_a()
 {
 return setcallback();
  }
 void Doprint(string str, std::function<void(void)>workdonecb)
 {
 cout<<"calling through A \n"<<str<<endl;
 workdonecb();
 }

};
class B
{
 public:
 std::function<void(std::string,std::function<void(void)>)>b_doprint;
 B (A *ptr)
 {
 cout<<"In constructor B"<<endl;
 b_doprint=ptr->getcallback_a();
 Doprint();
  }
 auto getcallback_b()
 {
 //return ptr->getcallback_a();
 }
 void Doprint()
 {
      auto workdone =std::bind(&B::printdone,this);
 b_doprint("Work in b",workdone);
 }
 int printdone()
 {
 cout<<"WORK DONE IN B"<<endl;
 }

};
class C
{
 public:
 std::function<void(std::string,std::function<void(void)>)>c_doprint;

typedef int (  C::*fptr)(int);
C* mC;
void Doprint();
// void B::Doprint()
// {

// }


 C (B (*fnptr)(void))
 {
  void (*fnptr)(void);
  //fnptr = Doprint()
   //= ptr->getcallback_b();
  //fnptr ->B::getcallback_b;
 cout<<"In C constructor"<<endl;
 // c_doprint = fnptr->getcallback_b();
 }
 void Doprint(B (*fnptr)(void))
 {
 auto workdone = std::bind(&C::printdone,this);
 c_doprint("work in c",workdone);

 //return workdone;
 }
  void printdone()
   {
 cout<<"WORK DONE BY C"<<endl;
 }
};

void C::Doprint()
{
     fptr p = &(B::printdone);
     (mC->*p)(2);
}
int main()
{
    A a;
    
 A *ptr1;
 B *ptr;
 C c;
 B b(ptr1);
 c.Doprint();
//  A a;
//  a.getcallback_a();

 return 0;
}



