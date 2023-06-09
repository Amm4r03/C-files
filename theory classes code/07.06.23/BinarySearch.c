// performs binary search on an input array, taking input for key as well from user

#include <stdio.h>
// allows user to enter unsorted array and the bubblesort function will sort the array

void BubbleSort(int input_array[], int size)
{
    int temp;
    int sorted;
    for (int i = 0; i < size - 1; i++)
    {
        sorted = 1;
        for (int y = 0; y < size - i - 1; y++)
        {
            if (input_array[y] > input_array[y+1])
            {
                temp = input_array[y];
                input_array[y] = input_array[y+1];
                input_array[y+1] = temp;
                sorted = 0;
            }
        }
        if (sorted)
            break;
    }
}

int SortedStatus(int input_array[], int size)   // function to check if array is sorted or not
{
    int sorted;
    for (int i = 0; i < size - 1; i++)
    {
        sorted = 1;             // assumes that the array is sorted
        for (int y = 0; y < size - i - 1; y++)
        {
            if (input_array[y] > input_array[y+1])
            {
                sorted = 0;     // status changed to unsorted
                return sorted;
            }
        }
    }
    return sorted;
}

int main()
{
    int size, key;
    printf("Enter size of array : ");
    scanf("%d", &size);

    int input_array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d member of array : ", i + 1);
        scanf("%d", &input_array[i]);
    }

    printf("The array so obtained is as follows : \n[");
    for (int i = 0; i < size; i++)
    {
        if (i + 1 == size)
        {
            printf("%d]\n", input_array[i]);
        }
        else
        {
            printf("%d, ", input_array[i]);
        }
    }

    if (!SortedStatus(input_array, size))
    {
        printf("The array is not sorted\nThe sorted array is as follows : \n[");
        BubbleSort(input_array, size);

        for (int i = 0; i < size; i++)
        {
            if (i + 1 == size)
            {
                printf("%d]\n", input_array[i]);
            }
            else
            printf("%d, ", input_array[i]);
        }
    }

    else
    {
        printf("The array is already sorted in ascending order\n");
    }
    
    printf("Enter the number to search in the array : ");
    scanf("%d", &key);

    return 0;
}