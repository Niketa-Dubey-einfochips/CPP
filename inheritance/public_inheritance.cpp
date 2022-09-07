#include<iostream>
using namespace std;
class base
{
    public:
    int nPublic;
    protected:
    int nProtected;
    private:
    int nPrivate;

};
class Der:public base//public inheritance
{
    // Public inheritance means:
    // Public inherited members stay public .
    // Protected inherited members stay protected .
    // Private inherited members stay inaccessible .
    public:
    Der()
    {
        nPublic= 20;
        cout<<nPublic<<endl;
        nProtected = 10;
        //nprivate inaccesible from derived class
   }
};
int  main()
{
    base b;
    b.nPublic= 1;
    //b.nProtected = 4;not accessible
    //b.nprivate not accesible because of the private in the base
    Der d;
  int x = d.nPublic= 23;
  cout<<x<<endl;
   // d.nProtected = 0;//not accessible


}