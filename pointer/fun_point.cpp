#include<iostream>

using namespace std;
void  helloWorld(int a)
{
    cout<<"hello niketa . value "<<a<<endl;

}
int main()
{
    typedef void(*helloWorldfunction)(int );
    helloWorldfunction funct = helloWorld;
    funct(3);
    funct(4);
    funct(4);

}