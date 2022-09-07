#include<iostream>
#include<string>
using namespace std;
class single
{
    public:
    int x , y;
    single()
    {
    cout<<"hello nik"<<endl;
    }
};
class Double : public single
{
    public:
    string s;
    Double()
    {

    }
    Double(int a , int b)
    {
        x= a;
        y=b;
        s= "kaha";
        cout<<x <<" "<<y <<s<<endl;
    }
};

int main()
{
    single s1;
    int i = s1.x;
    int j = s1.y;
    //cout<<i<<endl;
    //cout<<j<<endl;
    Double d1;
    Double(2,3);
    int r = d1.x;
    int h = d1.y;
   // cout<<i<<endl;
   // cout<<j<<endl;
}