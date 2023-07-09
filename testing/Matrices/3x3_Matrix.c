// testing input printing and calculation of 3x3 matrix

#include <stdio.h>
int main()
{
    printf("function : takes input for a 3x3 matrix, prints it out and calculates the determinant\n\n");
    int i, j;

    int matrix[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the value for (%d, %d) : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nThe matrix generated is as follows : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%6d", matrix[i][j]);
        }
        printf("\n");
    }

    float determinant;

    determinant = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2])) - matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix[1][2])) + matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix[1][1]));
    
    printf("The determinant of the above matrix is %0.0f", determinant);

    return 0;
}