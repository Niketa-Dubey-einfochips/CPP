#include<iostream>
using namespace std;

class square;
class rectangle
{

    int length=4 , width=5;
    public:
    friend void display(rectangle , square);
};

class square
{
    int side = 9;
    public:
    friend void display(rectangle , square);

};
void display(rectangle obj1 , square obj2)
{
    cout<<"rectangle : "<<obj1.length * obj1.width<<endl;
    cout<<"square : "<<obj2.side*obj2.side<<endl;
}

int main()
{
    rectangle r1 ; //It is not a member of the class so it cannot be called using the object.
    square s1;
    display(r1,s1);
    return 0;
}