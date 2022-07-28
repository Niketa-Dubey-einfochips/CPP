#include<iostream>
using namespace std;

int main()
{
    int rows , cols;
    cout<<"rows and columns :"<<endl;
    cin>>rows>>cols;
    int **matrix = new int * [rows]; // the rows are int array of pointers 
    //for each row we have to create the separate dynamic array
    //so we have to iterate though all the element of the array and for each 
    //we have to create the separate dynamic array

    for (int i=0 ; i<rows ; i++)
    {

        matrix[i] = new int [cols];

    }
   // matrix[1][2] = 88;//store number 88 in the position
     cout<<"enter the elements for the row and column "<<endl;
     for(int i =0;i<rows;i++)
     {
         for(int j=0; j<cols;j++)
         {

            cin>> matrix[i][j];
         }
         cout<<" "<<endl;
     }

     for(int i =0;i<rows;i++)
     {
         for(int j=0; j<cols;j++)
         {
            cout<<matrix[i][j];
         }
        cout<<endl;
     }
    cout<<endl;
    for (int i=0 ; i<rows ; i++)
    {
        delete[] matrix[i];
    }
    delete [] matrix;
    matrix = NULL;


}