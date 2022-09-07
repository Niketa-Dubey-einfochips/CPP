#include<iostream>
using namespace std;
class first 
{
    public:
    static int count;
    first()
    {

    }
    first(int x , int y)
    {
        cout<<x<<y<<endl;
        count++;
    }
    static void getcount(void)
    {
        cout<<"valur"<<count<<endl;
    }


};
int first::count;

class second 
{
    public:
    second()
    {

    }
    second(int i , int j)
    {
        cout<<i<<j<<endl;
    }
    

};

class third : public second
{//reuseability using inheritance
//single ,multiple,hierarchical inheritance,multilevel,hybrid inheritance
//save time and money means without testing and debugging

    public:
    third()
    {

    }
    

};
int main()
{
    first::getcount();
}