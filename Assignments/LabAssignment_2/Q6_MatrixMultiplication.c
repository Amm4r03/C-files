// Q6 : program to calculate the product of 2 matrices of order p*q and q*p and calculate their product 

#include <stdio.h>

void printMatrix(int rows, int columns, int matrix[rows][columns]);

void PrintDashes()
{
    printf("\n");
    for (int i = 0; i < 40; i++)
    {
        printf("-");
    }
    printf("\n");
}

void printMatrix(int rows, int columns, int matrix[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int r1, int c1, int matrix1[r1][c1], int r2, int c2, int matrix2[r2][c2])
{
    if (c1 != r2)
    {
        printf("Cannot multiply matrices: Invalid dimensions\n");
        return;
    }

    int result[r1][c2];     // result matrix to store result
    // result matrix has rows equal to rows of matrix 1 and columns = columns from matrix 2

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0; // sum for a member in result matrix is set to 0 (additive identity)

            // calculate product of the i-th row of matrix1 and the j-th column of matrix2
            for (int k = 0; k < c1; k++)
            {
                result[i][j] = result[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    PrintDashes();

    printf("Result matrix : \n");
    printMatrix(r1, c2, result);
}

int main()
{
    int rows, columns;             
    printf("enter the number of rows for matrix 1 : ");
    scanf("%d", &rows);

    printf("enter the number of columns for matrix 1 : ");
    scanf("%d", &columns);

    int matrix1[rows][columns];         // declared 2D array of size rows*columns for matrix 1

    printf("Enter the values for matrix 1 :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("enter value for (%d, %d) : ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    PrintDashes();
    printf("Matrix 1 :\n");
    printMatrix(rows, columns, matrix1);

    // for 2 matrices to get multiplied
    // number of columns in first matrix need to be equal to number of rows in second matrix 

    int rows2, columns2;
    rows2 = columns;        // matrix 2 has as many rows as columns in matrix 1

    printf("number of rows for matrix 2 is : %d\n", rows2);
    printf("Enter the number of columns for matrix 2 : ");

    scanf("%d", &columns2);

    int matrix2[rows2][columns2];

    printf("Enter the values for matrix 2 :\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            printf("enter the value for (%d, %d) : ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    PrintDashes();
    printf("Matrix 2 : \n");
    printMatrix(rows2, columns2, matrix2);

    multiplyMatrices(rows, columns, matrix1, rows2, columns2, matrix2);

    return 0;
}