#include<iostream>
#include<string>
#include<memory>
//#include <memory>
#include <functional>
//#include <iostream>
#include <algorithm>
using namespace std;

class student_name
{
    public:
    string name;
    //void (*set_name)(char *);
    int a,b;
    student_name()
    {
        cout<<"default constructor";

    }
    student_name(string n )
    {
        name = n;

    }
    string set_name()
    {
        //cout<<"enter the name of the student"<<endl;
       // cin>>name;
       // cout<<name;
       return name;
    }
};

int main()
{
    student_name obj;
   // string y = student_name::set_name("hello");
    //using namespace std:: placeholders;
   // auto f1 = bind(student_name::set_name,"nik");
    //y= f1;
  //  obj1.set_name();
//   string (*f1)()=   student_name::set_name;
auto f1 = bind(&student_name::set_name,obj ,"he")
//     string student_name::*ptr1 = & student_name::set_name;
//     obj1.*ptr1 = "hello";
//     obj1.set_name();//std::bind , this pointer , 
   // getch();
  //  string student_name ::
   //char (student_name::*ptr)(char *);
   // set_name('hi');
  // ptr = student_name::set_name('hi');
    //student_name::ptr();

    //*obj1 = ptr('hello');
   // student_name s;
   // student_name *pt = &s;


  //  p1('new');

  //  ptr  p1 = obj1.set_name;
  //  ptr = obj1::set_name;
   // int na = ptr('Hello');


   // ptr = obj1.set_name(er);

}