#include <iostream>

using namespace std;

class opr{
    public:
    int x ,y;
    opr()
    {
        
    }
    opr(int a, int b)
    {
        x=a;
        y=b;
    }
    
     opr operator +(opr obj)
    {
        opr b1;
        b1.x = this->x+obj.x;
        b1.y=y+obj.y;
        return b1;
    }
    
    void display()
    {
        cout<<"x"<<x<<"+"<<"y"<<y<<endl;
        
    }
};

int main()
{
    opr r1(2,3),r2(3,4);
    opr r3;
    r3 = r1+r2;
    r3.display();
    r1.display();
    
    cout<<"Hello World";

    return 0;
}