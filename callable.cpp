
//code to queue and dequeue actions in the list using callback function
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
void action_a()
    {
        std::function<void(void)>fnptr_a;      
        if (isActionReqToQ == true)
        { 
            fnptr_a = std::bind(&Event::action_a,this );
            func.push_back(fnptr_a); 
           // cout<<"A pushed"<<endl;              
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
            fnptr_b = std::bind(&Event::action_b,this,a); 
            func.push_back(fnptr_b);
           // cout<<"B pushed"<<endl;    
        }
    else if (isActionReqToQ == false)
        {    
           cout<<"B is done value is "<<a<<endl;
        }    
    }

void action_c()
    {
        std::function<void(void)>fnptr_c;
    if (isActionReqToQ == true)
        { 
             fnptr_c = std::bind(&Event::action_c ,this);
             func.push_back(fnptr_c);
             cout<<func.size()<<endl;  
            // cout<<"C pushed"<<endl;
        } 
    else if(isActionReqToQ == false)
        { 
            cout<<"C is done"<<endl;
        }   
    }

void set_mode(bool isActionReqToQ_set)
    {
    if( isActionReqToQ_set == false && isActionReqToQ == true)
         {
            isActionReqToQ = false;  
            for(auto it = func.begin();it != func.end();it++)
            {
               (*it)();  
              cout<<"iterator\n"<<endl;  
            } 
            func.clear();
         }  
    isActionReqToQ = isActionReqToQ_set; 
    }      
};

int main()
{
    Event e;
    e.set_mode(true);
    cout<<"___________"<<endl;
    e.set_mode(true);
    e.action_a();
    e.action_b(3);
    cout<<"___________"<<endl;
    e.set_mode(false);
    cout<<"________________________"<<endl;
   e.set_mode(true);
    e.action_a();
    e.action_b(4);
    e.set_mode(false); 
}
