#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
// implementation of the base class
// pointer pointing to derived class 
class Base_class
{


    public:
    int var_base ;
  void func_ptr()
    {
        cout<<"hey their\n"<<var_base<<endl;
    }

};


class Derived_class:virtual public Base_class
{
    public:
    int var_derived;
   void func_ptr()
    {
        cout<<"hey derived\n"<<var_derived<<endl;
    }
    void Var()
    {
        int x = 5;
        cout<<x<<"  "<<var_derived<<endl;
        cout<<"dispaly base variable"<<var_base<<endl;
    }

};

int main()
{
    Base_class *ptr_base;
    cout<<"address before pointing to derivedptr_base"<<ptr_base<<endl;
    Base_class objOfBase;
    Derived_class ObjOfDerived;
    cout<<&ObjOfDerived<<endl;
    ptr_base = &ObjOfDerived;
    cout<<"address after pointing to derived"<<ptr_base<<endl;
    ptr_base->var_base= 45;
    cout<<"calling function pointer using base "<<endl;
    ptr_base->func_ptr();
    ptr_base->var_base= 34;
    cout<<"calling two function pointer using base "<<endl;
    ptr_base->func_ptr();

    Derived_class *ptr_derived;
    ptr_derived = &ObjOfDerived;
    ptr_derived->var_base = 100;
    ptr_derived ->var_derived = 11;
    cout<<"calling using derived pointer "<<endl;
    ptr_derived->func_ptr();
    ptr_derived ->var_derived = 16;
    ptr_derived->Var();
    return 0;


}