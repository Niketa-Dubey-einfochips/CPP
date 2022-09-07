#include<iostream>
using namespace std;
class Mat_2;
class Mat_1
{
    public:
    int **matrix_1;
    int rows, columns =0;
    void setdata()
    {
        cout<<"enter the number of the rows and column :"<<endl;
        int **matrix_1 = new int * [rows];
        for (int i=0 ; i<rows ; i++)
        {
            matrix_1[i] = new int [columns];
        }
        cout<<"enter the number of the rows and column :"<<endl;
        for(int i =0;i<rows;i++)
        {
         for(int j=0; j<columns;j++)
         {

            cin>> matrix_1[i][j];
         }
         cout<<" "<<endl;
     }
    //  for (int i=0 ; i<rows ; i++)
    // {
    //     delete[] matrix_1[i];
    // }
    // delete [] matrix_1;
    // matrix_1 = NULL;
       // cin>>rows>>columns;
    }
    friend int **Add(Mat_1 ,Mat_2);
};

class Mat_2
{
    public:
    int **matrix_2;
    int rows, columns =0;
   // int **matrix = new int * [rows];
    void setdata()
    {
        int **matrix_2 = new int * [rows];
        for (int i=0 ; i<rows ; i++)
        {
            matrix_2[i] = new int [columns];
        }
        cout<<"enter the number of the rows and column :"<<endl;
        for(int i =0;i<rows;i++)
        {
         for(int j=0; j<columns;j++)
         {

            cin>> matrix_2[i][j];
         }
         cout<<" "<<endl;
     }
    //  for (int i=0 ; i<rows ; i++)
    // {
    //     delete[] matrix_2[i];
    // }
    // delete [] matrix_2;
    // matrix_2 = NULL;
    }
       // cin>>rows>>columns;
    friend int **Add(Mat_1 ,Mat_2);
   // friend int **Add(Mat_1 ,Mat_2);
};

int **Add(Mat_1 obj1 ,Mat_2 obj2 )
{
    int **matrix_3 ;
    int rows = 0;
    int columns = 0;
    // for (int i = 0; i<rows;i++ )
    // {
    //     matrix_3[rows][columns] =obj1.Mat_1::matrix_1[rows][columns]+obj2.Mat_2::matrix_2[rows][columns];
    // }
    for(int i =0;i<rows;i++)
     {
         for(int j=0; j<columns;j++)
         {
            matrix_3[rows][columns] =obj1.Mat_1::matrix_1[rows][columns]+obj2.Mat_2::matrix_2[rows][columns];
         }
     //   cout<<endl;
     }
     cout << endl << "Sum of two matrix is: " << endl;
   // cout<<endl;
    for(int i =0;i<rows;i++)
     {
         for(int j=0; j<columns;j++)
         {
            cout<<matrix_3[i][j]<< " ";
            if(columns -1)
                cout<<endl;
         }
        cout<<endl;
     }
    cout<<endl;
    for (int i=0 ; i<rows ; i++)
    {
        delete[] matrix_3[i];
    }
    delete [] matrix_3;
    matrix_3 = NULL;
   // return matrix_3;
}

int main()
{
    Add;
    Mat_1 obj1 ; Mat_2 obj2;
    obj1.setdata();
    obj2.setdata();
    cout<<"sum of two matrix is "<<Add(obj1, obj2);
    // for (int i=0 ; i<rows ; i++)
    // {
    //     delete[] Add ::matrix_3[i];
    // }
    // delete [] matrix_3;
   // matrix_3 = NULL;

}