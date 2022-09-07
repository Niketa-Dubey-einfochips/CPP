#include<iostream>
using namespace std;
class BaseToPrivate
{
    public:
    int nPublic;
    protected:
    int nProtected;
    private:
    int nPrivate;
    public:
    BaseToPrivate(int val)
    {
        nPrivate = val;
        cout<<"value in base of nprivate is \n"<<nPrivate<< endl;
    }
    // int get()
    // {
    //     //nPrivate = 12;
    //     return nPrivate;
    // }


};

class proPrivate : private BaseToPrivate
{

public:
        proPrivate(int x ):BaseToPrivate(x)
        {
            
    int nPublic;
    
    int nProtected;
    
    int nPrivate;
        }
};
int main()
{
   BaseToPrivate b1(8);
   proPrivate p1(3);


  // int y = b1.nPublic = 3;
   //cout<<y<<endl;
  // proPrivate p1;
  // p1.nPublic= 4; not accessible how to access


}
