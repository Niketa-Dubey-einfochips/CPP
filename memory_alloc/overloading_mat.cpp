#include <iostream>
using namespace std;
class Matrix
{
    private:
        
    public:
        int **matrix_1;
        int rows, columns ;



   
    Matrix()
    {
        cout << "enter the number of rows and column :" << endl;
        cin >> rows >> columns;
        matrix_1 = (int **)malloc(rows * sizeof(int));
        for (int i = 0; i < rows; i++)
        {
            matrix_1[i] = (int *)malloc(columns * sizeof(int));
        }
    }
    void getinput()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cin >> matrix_1[i][j];
            }
            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << matrix_1[i][j] << ' ';
            }
            cout << endl;
        }
    }
    friend Matrix operator+(Matrix &mat_1 , Matrix &mat_2);
    friend Matrix operator*(Matrix , Matrix);
    
};



Matrix operator+ (Matrix mat_1, Matrix mat_2)
    {
        //int rows , columns;
        Matrix mat[rows][columns] = Matrix();
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                mat[i][j] = mat_1.matrix_1[i][j] + mat_2.matrix_1[i][j];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << mat[i][j] << ' ';
            }
            cout << endl;
        }
        //return mat;
    }

int main()
{
    Matrix mat_1;
    mat_1.getinput();
    Matrix mat_2;
    mat_2.getinput();
    Matrix mat_3;
    mat_3 = mat_1+mat_2;
    //Matrix mat_4;
    //mat_4 = mat_1.operator*(mat_2);




    // mat_3=mat_1 + mat_2;



   return 0;
}