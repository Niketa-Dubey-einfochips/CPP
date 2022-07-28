#include<iostream>
using namespace std;
int main()
{
    int *ptr = (int*)malloc(5*sizeof(int));
    if(!ptr)
    {
        cout<<"memory allocation failed "<<endl;
        exit(1);
    }
    cout<<"initialization"<<endl;
for (int i=0 ; i<5; i++)
{
    //int count = 0;
   *ptr = 5;
    cout<<"after writing "<<*ptr<<endl;
    //count++;

}
free(ptr);
}