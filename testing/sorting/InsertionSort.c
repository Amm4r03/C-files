// this code implements insertion sort

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
        int key = input[i];
        int j = i - 1;
        while (j >= 0 && input[j] > key)
        {
            input[j + 1] = input[j];
            j = j - 1;
        }
        input[j + 1] = key;
    }

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

    return 0;
}