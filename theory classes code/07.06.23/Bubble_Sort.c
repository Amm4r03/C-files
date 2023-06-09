// thought it would better to try bubble sort before trying binary search

#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size : ");
    scanf("%d", &size);

    int input_array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d member of array : ", i+1);
        scanf("%d", &input_array[i]);
    }

    printf("The array generated is as follows : \n[");
    
    for (int i = 0; i < size; i++)
    {
        if (i + 1 == size)
        {
            printf("%d]", input_array[i]);
        }
        else
        printf("%d, ", input_array[i]);
    }
    
    printf("\nThe sorted array is as follows : \n[");
    
    // sorting
    int temp;
    int sorted;

    for (int y = 0; y <= size-1; y++)
    {
        sorted = 1;     // assume that array is sorted

        for (int j = 0; j < size - y - 1; j++)
        {
            if (input_array[j] > input_array[j + 1])
            {
                temp = input_array[j];
                input_array[j] = input_array[j + 1];
                input_array[j + 1] = temp; 
                sorted = 0;     // denotes that array is not sorted yet and a change has taken place in iteration
            }  
        }  

        if (sorted)
        break;
    }

    
    //printing sorted array
    for (int i = 0; i < size; i++)
    {
        if (i + 1 == size)
        {
            printf("%d]", input_array[i]);
        }
        else
        printf("%d, ", input_array[i]);
    }
    
    return 0;
}