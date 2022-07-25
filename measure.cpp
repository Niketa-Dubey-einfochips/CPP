#include<iostream>
//#include<conio.h>
using namespace std;
class Measure
{    public:
    float  height;
    int length;
    int width;

    public:
    void setInput(int x, int y, int z)
    {   
        //int x, y;
         height = x;
         length = y;
         width = z;
    }

    int area()
    {
        cout<< length*width<<endl;
    }
    int volume()
    {
        cout<< (length*width*height)<<endl;
    }
    


};

int main()
{
    // Measure m1, m2;
    // m1.setInput(12,34,56);
    int l, w, h;
    cout<<"enter hte length , width and height "<<endl;
    cin>>l>>w>>h;
    Measure m1 , m2;
    m1.setInput(l,w,h);
    cout<<"the area of the m1 is "<<endl;
    m1.area();
    cout<<"the volume of the m2 is "<<endl;
    m1.volume();
   // getch();
    m2.setInput(l,w,h);
    cout<<"the area of the m2 is "<<endl;
    m2.area();
   cout<<"the volume of the m2 is"<<endl;
    m2.volume();
    return 0;
}