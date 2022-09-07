#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
class A
{
public:
    int i , j;
    string s;

int SetCallback()
{
    cout<<"hello \n"<<endl;
    
}

int F1(int i, int j , string s)
{
     this->i=i;
    this->j=j;
    this->s=s;
    cout<<"i: "<<this->i<<endl;
   // return x+y;

    // cout<<"value of i\n"<<i<<"\n"<<"value of j\n"<<j<<"\n"<<"value of s \n"<<s<<endl;
    // return 0;
}

};

int main()
{
A obj1;
  auto f1 = std::bind(&A::F1,obj1 , placeholders::_1,placeholders::_2,placeholders::_3);
  f1(1,2,"hello");
  //cout<<f1(1,2,"hello");
     //void (*ptr)(int , int);
    // ptr  = A::F1();
    //function<int<intfunc = std::bind(&A::F1,&obj1 ,placeholders::_1,placeholders::_2, placeholders::_3);
    //func(1,2,"hello");

   // func(1,2,3,"hello");
   // function<int<int,int,string>>func1= std::bind(&A::SetCallback,&obj1,1,1,"hello");

}