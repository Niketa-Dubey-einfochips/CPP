#include<iostream>
#include<functional>
using namespace std;
class A
{
    public:
    int x,y;
    A()
    {

    }
    A(A &a)
    {
        cout<<"default"<<endl;
    }

    auto setcallback()
    {
         cout<<"setcallback"<<endl;
         auto func = std::bind(&A::Print,this,std::placeholders::_1,std::placeholders::_2);
         return func;

        // cout<<func(3);
    }

    int DoPrint(string , std::function<void> workDoneCb)
    {

                std::cout <<"string";
                workDoneCb();

                return x+y;
    }
};

class B
{
    private:
    std::function<void(std::string , std::function<void>)> m_doPrint ;
    auto Getcallback = std::bind(&A::setcallback );

    auto printfnptr;
    // B(A *ptr)
    // {
    //     printfnptr = ptr->Getcallback();   
    //  }
    public:
    void GetDoPrintForMe(  A* ptr )
    {
        m_doPrint = ptr->GetCallback();
    }

    A obj2;
    void DoPrint(std:: string str)
    {
        //void (*fnctionptr)(int );

       auto workdone =  std::bind(&B::PrintDone,this,placeholders::_1);
       obj2. workDoneCb = workdone;
        m_doPrint(str, workdone);

    }

    void PrintDone()
    {
        cout << "workDone";

    }


};

int main()
{
    A obj;
    B b;
    b.GetDoPrintForMe( &obj) ;
    b.DoPrint();

    auto func = obj.setcallback();

    func(2,3); ---> obj.f1()


    obj1.setcallback(1000);
    obj2.setcallback(2000);

    return 0;
}