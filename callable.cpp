#include<iostream>
#include<functional>
#include<algorithm>
#include<list>
#include<iterator>
#include<vector>
using namespace std;
list<function<void(void)>>func;
class Event
{
    public: 
    bool isActionReqToQ;
    //int flag = 0;
  // void set_mode( bool isActionReqToQ_set) ;
  //  bool isActionReqToQ_set = true;
void action_a()
    {
        std::function<void(void)>fnptr_a;
        cout<<__LINE__<<endl;      
        if (isActionReqToQ == true)
         {  
            // set_flag(0);
            cout<<__LINE__<<endl;
            fnptr_a = std::bind(&Event::action_a,this );
            func.push_back(fnptr_a);
           // isActionReqToQ = false; 
            cout<<func.size()<<endl;
            cout<<__LINE__<<endl;
            cout<<func.size()<<endl;
            cout<<func.size()<<endl;
            cout<<"b"<<endl;              
       }
    else if(isActionReqToQ == false)
        {
            cout<<"A is done"<<endl;
        }   
    }

void action_b(int a)
    {
        std::function<void(void)> fnptr_b;
        if (isActionReqToQ==true)
        {
            cout<<__LINE__<<endl;
            fnptr_b = std::bind(&Event::action_b,this,a); 
            func.push_back(fnptr_b);
            cout<<func.size()<<endl;
            cout<<"n"<<endl;    
        }
    else if (isActionReqToQ == false)
        {    
           cout<<"B is done"<<a<<endl;
        }    
    }

void action_c()
    {
        std::function<void(void)>fnptr_c;
    if (isActionReqToQ == true)
        { 
            cout<<__LINE__<<endl;
             fnptr_c = std::bind(&Event::action_c ,this);
             func.push_back(fnptr_c);
             cout<<func.size()<<endl;  
             cout<<"g"<<endl;
        } 
    else if(isActionReqToQ == false)
        { 
            cout<<"C is done"<<endl;
        }   
    }

void set_mode(bool isActionReqToQ_set)
    {
       // isActionReqToQ_set = true;
      // bool isActionReqToQ_set;
    if( isActionReqToQ_set == false && isActionReqToQ == true)
         {
            isActionReqToQ = false;
             //for(auto it :func)
            for(auto it = func.begin();it != func.end();it++)
            {// if(isActionReqToQ==) 
               (*it)();
               // a[it] = func(*it)();
              cout<<"test\n"<<endl;  
            } 
            func.clear();
         } 
     cout<<__LINE__<<endl; 
    isActionReqToQ = isActionReqToQ_set;
    cout<<isActionReqToQ<<endl;
    cout<<func.size()<<endl;
    cout<<__LINE__<<endl;  
    }      
};

int main()
{
    Event e;
    //Event::set_mode()
    // e.action_a();
    // e.action_b();
    // e.action_c();
    e.set_mode(true);
    cout<<"___________"<<endl;
    e.set_mode(true);
    e.action_a();
    e.action_b(3);
    // e.action_b();
    // e.action_a();
    cout<<"___________"<<endl;
    e.set_mode(false);
    cout<<"_____________________"<<endl;
   e.set_mode(true);
    e.action_a();
    e.action_b(4);
    e.set_mode(false); 
}
