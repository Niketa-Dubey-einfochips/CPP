#include<iostream>
using namespace std;

int main()
{
    int rows , cols;
    cout<<"rows and columns :"<<endl;
    // the rows are int array of pointers 
    //for each row we have to create the separate dynamic array
    //so we have to iterate though all the element of the array and for each 
    //we have to create the separate dynamic array

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

    cout<<*(matrix+1)<<endl;
    cout<<*(matrix+2)+2<<endl;
    cout<<*(*(matrix+2)+2)<<endl;
     //cout<<*(*matrix+2)[0];//matrix + 2 points to the 0th 1-D array. 
/*cout
    arr + i points to ith element of arr, on dereferencing it will get ith element of arr which is of course a 1-D array.
     Thus the expression *(arr + i) gives us the base address of ith 1-D array.
he pointer expression *(arr + i) is equivalent to the subscript expression arr[i]. So *(arr + i) which is same as arr[i]
 gives us the base address of ith 1-D array.

 To access an individual element of our 2-D array, we should be able to access any jth element of ith 1-D array.
Since the base type of *(arr + i) is int and it contains the address of 0th element of ith 1-D array, 
we can get the addresses of subsequent elements in the ith 1-D array by adding integer values to *(arr + i).
For example *(arr + i) + 1 will represent the address of 1st element of 1stelement of ith 1-D array and *(arr+i)+2 will represent the address of 2nd element of ith 1-D array.
Similarly *(arr + i) + j will represent the address of jth element of ith 1-D array. On dereferencing this expression we can get the jth element of the ith 1-D array.
     */

    for (int i=0 ; i<rows ; i++)
    {
        delete[] matrix[i];
    }
    delete [] matrix;
    matrix = NULL;


}