#include<iostream>
using namespace std;
class XYZ;
class ABC 
{
    private:
    int numA;
    public:
    void setdata()
    {
        numA = 10;
    }
    friend int add(ABC,XYZ);
};

class XYZ
{
    private:
    int numB;
    public:
    void setdata()
    {
        numB = 10;
    }
    friend int add(ABC,XYZ);

};

int add(ABC obj1 , XYZ obj2)
{
    return(obj1.numA + obj2.numB);
}

int main()
{
        ABC objA ;XYZ objB;
        objA.setdata();
        objB.setdata();
        cout<<"sum: "<<add(objA ,objB)<<endl;


}