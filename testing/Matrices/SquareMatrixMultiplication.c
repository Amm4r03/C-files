// multiplies 2 square matrices 

#include <stdio.h>
int main()
{
    int size;
    
    printf("Enter the size of the 2 matrices you want to multiply : ");
    scanf("%d", &size);

    printf("Matrix 1 : \n");
    int Matrix1[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the value for (%d, %d) : ", i+1, j+1);
            scanf("%d", &Matrix1[i][j]);
        }
    }

    printf("Matrix 2 :\n");
    int Matrix2[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the value for (%d, %d) : ", i+1, j+1);
            scanf("%d", &Matrix2[i][j]);
        }
    }

    printf("Matrix 1 : \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%5d", Matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2 : \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%5d", Matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct Matrix : \n");
    int ProductMatrix[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int sum = 0;
            for (int k = 0; k < size; k++) 
            {
                sum = sum + Matrix1[i][k] * Matrix2[k][j];
            }
            ProductMatrix[i][j] = sum;
            printf("%5d ", ProductMatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}