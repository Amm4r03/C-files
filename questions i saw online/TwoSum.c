// Leetcode
// https://leetcode.com/problems/two-sum/

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

void twosum (int input[], int target, int size)
{
    int match = 0;

    for (int i = 0; i < size; i++)
    {
        for (int y = i+1; y < size; y++)
        {
            if (input[i] + input[y] == target)
            {
                match++;
                printf("[%d, %d] ", i, y);
                break;
            }
        }
    }
    if(match == 0)
    {
        printf("Error : No possible matches found within the array");
    }
}

int main()
{
    int size;
    printf("Enter array size : ");
    scanf("%d", &size);

    int input_array[size];

    populate_array(input_array, size);

    printf("The array obtained is as follows : ");

    print_array(input_array, size);

    int target;

    printf("Enter a target value : ");
    scanf("%d", &target);

    twosum(input_array, target, size);

    return 0;
}