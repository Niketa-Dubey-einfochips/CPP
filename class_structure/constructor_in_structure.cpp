#include<iostream>
using namespace std;
struct Empty
{

    Empty()
    {
        cout<<"this is constructor"<<endl;
    }
};

int main()
{
    struct Empty e1; //structure can have consructor
    //cout<<e1<<endl;
}