// takes array from user and reverses its order

#include <stdio.h>

void populate_array(int input_array[], int size)    // inputs values into the array
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d member of array : ", i+1);
        scanf("%d", &input_array[i]);
    }
}

void print_array(int input_array[], int size)       // prints the values of the array
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", input_array[i]);
        if (i+1 != size)
        {
            printf(", ");
        }
        
    }
    printf("]\n");
}

void ArrayReverser(int input_array[], int size)
{
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        temp = input_array[i];
        input_array[i] = input_array[size-1-i];
        input_array[size - i - 1] = temp;
    }   
}

int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int input_array[size];

    populate_array(input_array, size);

    printf("The array generated is as follows : ");

    print_array(input_array, size);

    printf("The reveresed array is as follows : ");

    ArrayReverser(input_array, size);

    print_array(input_array, size);

    return 0;
}