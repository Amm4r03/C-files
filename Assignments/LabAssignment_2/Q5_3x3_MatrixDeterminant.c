// Q5 : code to calculate the determinant of the 3x3 matrix

#include <stdio.h>

int main()
{
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for (%d, %d) : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // print the matrix obtained

    printf("the matrix obtained is given below : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    

    printf("\nThe determinant is : ");

    float determinant;

    determinant = (float) matrix[0][0] * ((matrix[1][1] * matrix [2][2]) - (matrix[1][2] * matrix[2][1])) - (float) matrix[0][1] * ((matrix[1][0] * matrix [2][2]) - (matrix[1][2] * matrix[2][0])) + (float) matrix[0][2] * ((matrix[1][0] * matrix [2][1]) - (matrix[2][0] * matrix[1][1]));

    printf("%0.2f", determinant);

    return 0;
}