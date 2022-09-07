#include<iostream>
#include<string>
using namespace std;

class grandParent
{
    public:
    grandParent()
{
    cout<<"this is grand default constructor \n"<<endl;
}
    grandParent(int x)
{
    cout<<"this is grand parametrized constructor\n "<<x<<endl;
}
};

class Parent_Mother :virtual public grandParent
{
    public:

    Parent_Mother(int i):grandParent(i)
{
    cout<<"this is mother constructor\n"<<i<<endl;
}
};

class Parent_Father :virtual public grandParent
{
public:
    Parent_Father(int i): grandParent(i)
{
    cout<<"this is father  constructor \n"<<i<<endl;
}
};

class Child:public Parent_Father , public Parent_Mother
{
    public:
    Child(int j):Parent_Father(j),Parent_Mother(j)
    {
    cout<<"this is the child class \n"<< j<<endl;
    }
};

int main()
{
    Child ch1(5);
    
}