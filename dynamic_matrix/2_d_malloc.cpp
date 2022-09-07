#include<iostream>
using namespace std;
int main()
{
    long  column , row ,i,j;
    int **y;
   // x=(int*)malloc(sizeof(int)*40);
   cout<<"enter the number of rows and column :"<<endl;
   cin>>row>>column;
    y = (int**)malloc(row*sizeof(int));
    /*
    Usually we create arrays at compile time in C++, the size of such arrays is fixed. 
    In the case at run time we do not use all the space or extra space is required for 
    more elements to be inserted in the array, then this leads to improper memory management 
    or segmentation fault error.



    This function does not call the constructor. Since memory is allocated dynamically thus leads to avoid various segmentation fault errors. 
    Memory allocated using this function cannot be overridden that is no other program will be able to use that memory block until it is freed from that particular pointer.
    */
   // cout<<"enter the number of rows and column :"<<endl;
   // cin>>row>>column;
    for(i = 0 ;i<row ;i++)
    {
        y[i]=(int*)malloc(column*sizeof(int));

    }
    cout<<"enter the elements for the row and column "<<endl;

    for(i=0;i<row;i++)
    {
        for(j =0;j<column;j++)
        {
            cin>>y[i][j];
        }
        
    }
    for(i=0;i<row;i++)
    {
        for(j =0;j<column;j++)
        {
            //cin>>y[i][j];
            cout<<y[i][j];
        }
        cout<<endl;

        
    }
  //  cout<<endl;

   // for (int i =0;i<row;i++)
   // {
      //  free(y[i]);
   // }
   free(y);

    
}