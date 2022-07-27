#include<iostream>
using namespace std;



class ABC
{
public:
void display(){
cout<<"This is parent class";
}
};
class XYZ:public ABC{
public:
void display(){ //overrides the display()mehtod of class ABC
cout<<"\nThis is child class";
}
};

int main(){
XYZ x;
x.display();//method of class XYZ invokes, instead of class ABC
x.ABC::display();
}