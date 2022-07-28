#include<iostream>
//An array of structures finds its applications in grouping the records
// together and provides for fast accessing.
using namespace std;
struct nik
{
    int employee_id;
    string employee_name;
    int mobile_number;
    //string designation;
};

int main()
{
    struct nik employ[100];
   // cout<<"structure size"<<sizeof(nik)<<endl;
    struct employ *ptr = (struct employ* )(&employ+1);

    int i;
    for (i=0; i<3 ;i++)
    {
        cout<<"employee "<<i+1<<endl;
        cout<<"enter employee_id "<<endl;
        cin>>employ[i].employee_id;
        cout<<"enter employee_name "<<endl;
        cin>>employ[i].employee_name;
        cout<<"enter employee mobile number "<<endl;
        cin>>employ[i].mobile_number;
        // cout<<"enter employee designation "<<endl;
        // cin>>employ[i].designation;

    }
    for(i=0; i<3;i++)
    {
        cout<<"address of staring :"<<&employ[0]<<endl;
        //cout<<"employee "<<&i+1<<endl;
        cout<<"employee "<<i+1<<endl;

        cout<<"employee_id "<<employ[i].employee_id<< endl;
        cout<<"employee_name "<<employ[i].employee_name<<endl;
        cout<<"employee mobile number "<<employ[i].mobile_number<<endl;
        
       // cout<<"employee designation "<<employ[i].designation<<endl;

        
    }
    cout<<"end address is : "<<&employ[i]<<endl;
    cout<<"memory stored using structure is :"<<&employ[i*sizeof(nik)]-&employ[0]<<endl;
     cout<<"structure size "<<sizeof(nik)<<endl;
    return 0;
    
}

