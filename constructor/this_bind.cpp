#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
class A
{
public:
    int i , j;
    string s;

auto SetCallback()
{
  auto func = std::bind(&A::F1,this, placeholders::_1,placeholders::_2);
   return func;
  //cout<<
  //f1(1,2,"hello");
    
}

int F1(int i, int j )
{
    return i+j;
   // return x+y;

    // cout<<"value of i\n"<<i<<"\n"<<"value of j\n"<<j<<"\n"<<"value of s \n"<<s<<endl;
    // return 0;
}
};

int main()
{
    A obj1;
    auto func = obj1.SetCallback();

    cout<<func(1,2)<<endl;
    obj1.SetCallback();

}