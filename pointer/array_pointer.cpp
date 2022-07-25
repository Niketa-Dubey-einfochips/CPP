#include<iostream>
using namespace std;
class PTR
{
    public:
    int value[4] = {5,6,7,8};
    int *ptr;
    int set()
    {
        ptr = value;
        cout<<"elements are : "<<endl;
        //cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
        for(int i =0 ; i<4; i++)
        {
            cout<<value[i]<<endl;
        }
    }


};

int main()
{
   PTR p1;
   p1.set(); 
}