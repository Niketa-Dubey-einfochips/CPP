#include<iostream>
#include<string>
using namespace std;

class opr
{
    private:
    int rows,columns;
    int a[3][3];
    public:
    void getFunction();
    
    void printFunction();
    friend opr operator*(opr,opr);
    


};

opr operator*(opr p, opr q)
{
    opr t;
    for(int i =0 ;i<3 ;i++)
    {
        for(int j=0 ; i<3;j++)
        {
            t.a[i][j] =0;
            for (int k =0 ;k<3 ;k++)
            {
                t.a[i][j]= t.a[i][j]+(p.a[i][k]*q.a[k][j]);
            }
            
        }
    }
return t;
}
void opr::getFunction()
{
    cout<<"enter matrix ";
    for(int i =0 ;i<3;i++)
    {
        for(int j=0;j<3;j++ )
        {
            cin>>a[i][j];
        }
    }

}

void opr:: printFunction()
{
    for(int i =0 ;i<3;i++)
    {
        for(int j=0;j<3;j++ )
        {
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
}

int main()
{
    opr o ,s,c;
    o.getFunction();
    s.getFunction();
    c = o*s;
    c.printFunction();
    getchar();

}