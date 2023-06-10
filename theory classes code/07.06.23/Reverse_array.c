// takes array from user and reverses its order

#include <stdio.h>

void populate_array(int input_array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d member of array : ", i);
        scanf("%d", &input_array[i]);
    }
}

void print_array(int input_array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", input_array[i]);
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

    return 0;
}