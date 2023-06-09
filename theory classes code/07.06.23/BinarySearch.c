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


int main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d member of array : ", i + 1);
        scanf("%d", i);
    }
    

    return 0;
}