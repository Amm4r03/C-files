// Q11 : finding smallest integer in array using pointers

#include <stdio.h>

int smallestInteger(int *arr, int size);        // function declaration

int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int input[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value for member %d : ", i+1);
        scanf("%d", &input[i]);
    }
    
    printf("The array received is as follows : ");

    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            printf("[%d, ", input[i]);
        }
        else if (i + 1 == size)
        {
            printf("%d]", input[i]);
        }
        else
        {
            printf("%d, ", input[i]);
        }
    }

    printf("\nSmallest integer in array : %d", smallestInteger(input, size));

    return 0;
}

int smallestInteger(int *arr, int size)     // function definition
{                                           // takes pointer to original array and size of array
    int smallest = *arr;                    // first member of array assumed to be the smallest

    for (int i = 0; i < size; i++)
    {
        if ((*(arr + i)) < smallest)        
        {
            smallest = *(arr + i);          // value in 'smallest' variable changed if a smaller number is found
        }
    }
    
    return smallest;
}