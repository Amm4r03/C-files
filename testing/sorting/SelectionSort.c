// uses selection sort for sorting the array

#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int input[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value for array member %d : ", i+1);
        scanf("%d", &input[i]);
    }
    
    printf("the array generated is as follows : ");
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            printf("[%d, ", input[i]);
        }
        else if (i + 1 == size)
        {
            printf("%d]\n", input[i]);
        }
        else
        printf("%d, ", input[i]);
    }
    
    printf("The sorted array is as follows : ");

    // sorting begins here

    for (int i = 0; i < size; i++) 
    {
        int minimum = i;
        for (int j = 0; j < size; j++)
        {
            if (input[j] < input[minimum])
            {
                minimum = j;
            }
        }
    }

    return 0;
}