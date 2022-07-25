#include<iostream>
using namespace std;
union uni
{   
    char length;
    int breadth;
    int height;
    
};

int main()
{
    uni my;
    cout<<"size of union is "<<sizeof(my)<<endl;
    cout<<"length is l ? "<<endl;
    cin>>my.length;
    cout<<"\n the length is "<<my.length;
    cout<<"\n the breadth is "<<my.breadth;
    cout<<"\n the height is "<<my.height;
    cout<<"\n what is breadth measurement \n "<<endl;
    cin>>my.breadth;
    cout<<"\n the length is "<<my.length;
    cout<<"\n the breadth is "<<my.breadth;
    cout<<"\n the height is "<<my.height;
    cout<<"\n enter the height "<<endl;
    cin>>my.height;
    cout<<"\n the length is "<<my.length;
    cout<<"\n the breadth is "<<my.breadth;
    cout<<"\n the height is "<<my.height;
}
// namespace std;

