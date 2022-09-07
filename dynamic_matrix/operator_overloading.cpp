#include<iostream>
using namespace std;
int N;
class Mat_1
{
    public: 
    int **matrix_1;
    int rows, columns =0;
  
  void PrintMatrix();
    void setdata()
    {
        cout<<"enter the number of rows and column :"<<endl;
        cin>>rows>>columns;
        matrix_1 = (int**)malloc(rows*sizeof(int));  
        for(int i = 0 ;i<rows ;i++)
    {
        matrix_1[i]=(int*)malloc(columns*sizeof(int));

    }
    
    }

    void getdata()
    {
 
        for(int i=0;i<rows;i++)
        {
            for(int j =0;j<columns;j++)
        {
            cin>>matrix_1[i][j];
        }
        
    }
    for(int i=0;i<rows;i++)
    {
        for(int j =0;j<columns;j++)
        {
            //cin>>y[i][j];
            cout<<matrix_1[i][j];
        }
        cout<<endl;    
    }
  //  free (matrix_1);
    }

    void PrintMatrix(string str)
    {
        cout<<str<<endl;

       for(int i=0;i<rows;i++)
     {
        for(int j =0;j<columns;j++)
        {
            //cin>>y[i][j];
            cout<<matrix_1[i][j];
        }
        cout<<endl;       
    }
   // free(matrix_1); 
//    for (int i = 0; i < rows; i++) {
//   free (matrix_1[i]);
// }
// free(matrix_1);
     
    }
  
  


Mat_1 operator +(Mat_1 x)
    {
         int mat[rows][columns],i,j;
         for(int i =0 ;i<rows;i++)
         {
             for(int j =0;j<columns ; j++)
             {
                 mat[i][j]= matrix_1[i][j]+ x.matrix_1[i][j];
             }
         }
          for(int i =0 ;i<rows;i++)
         {
             for(int j =0;j<columns; j++)
             {
                cout<<mat[i][j];
             }
             cout<<endl;
         }
        // free (mat);

    }
    
 Mat_1 operator*(Mat_1 matrix)
    {
         
        int mata[rows][columns];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                mata[i][j]=0;
                for(int k=0;k<rows;k++)
                {
                    mata[i][j] += matrix_1[i][k] * matrix.matrix_1[k][j];
                }
                
            }
        }
        cout<<"output of the multiplication"<<endl;
       // PrintMatrix ("multiplication")
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                
                cout << mata[i][j] << ' ';
                cout<<&mata[i][j]<<endl;
            }
            cout << endl;
        }
         for (int i = 0; i < rows; i++)
          {
                free (matrix_1[i]);
        }
                free(matrix_1);
     
}
    
    
  

    

};



int main()
{
    Mat_1 matrix1, matrix2, matrix;
    matrix1.setdata();
    matrix1.getdata();
    matrix2.setdata();
    matrix2.getdata();
   //matrix.setdata();
    //matrix.PrintMatrix("output_1 of the main  multiplication");
    matrix1.operator*(matrix2);
   // cout<<&(matrix1.operator*(matrix2))<<endl;
    //free(matrix);
   // matrix.PrintMatrix("output_2 of the main  multiplication");
    
    
 
   
}