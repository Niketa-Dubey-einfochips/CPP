#include<iostream>
using namespace std;

int sum(int x, int y=2, int z = 10)
{
    return(x+y+z);
}
int main()

{
    cout<<"sum is : "<<sum(5)<<endl;
    cout<<"sum is : "<<sum(5,15)<<endl;
    cout<<"sum is : "<<sum(3,5,6)<<endl;
    return 0;
}