// trying to make this one work even if there are multiple entries in the array

// involves a little bit of linear search to fit the boundary case

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

    int middle = size/2;    // initialize the middle value of the array (rounds to floor in case of decimal)

    int lower = 0;          // initialize lower index of array
    int upper = size;       // initialize upper index of array (same as size)
    int locations[size];    // size of array is set assuming that all numbers are same key
    int count = 0;          // counter for number of matches found
    int y;
    int first_occurence = 0;          // counts the first occurrence of the key
    int last_occurence = size;       // final occurence
    int final_count = last_occurence - first_occurence + 1;        // calculates total occurrences in array using difference 

    for (int i = 0; lower <= upper; i++)
    {
        
        middle = (upper + lower)/2;


        if (input_array[middle] > key)
        {
            upper = middle - 1;
        }

        else if(input_array[middle] < key)
        {
            lower = middle + 1;
        }
    
        // boundary case : multiple values same as key exist in array
        else if (input_array[middle] == key && (input_array[middle-1] == key || input_array[middle+1] == key))
        {
            locations[count] = middle;
            count++;

            if (input_array[middle-1] == key && input_array[middle+1] != key)
            {
                upper = middle - 2;
                locations[count] = middle - 1;
                count++;
                last_occurence = middle;
            }
            else if (input_array[middle+1] == key && input_array[middle-1] != key)
            {
                lower = middle + 2;
                locations[count] = middle + 1;
                count++;
                first_occurence = middle;
            }
            else
            {
                while (input_array[middle - i] == key)
                {
                    i++;
                    count++;
                    first_occurence = middle - i;
                }
                lower = middle - i;
                while (input_array[middle + y] == key)
                {
                    y++;
                    count++;
                    last_occurence = middle + y;
                }
                upper = middle + y;
                break;
            }
        }

        else
        {
            locations[count] = middle;
            count++;
        }
    }

    final_count = last_occurence - first_occurence + 1;

    if (count < 1)
    {
        printf("Error : %d does not exist within the array", key);
    }
    
    else
    {
        if (final_count == 1)
        {
            printf("%d was found in the sorted array\nThe location is : \n", key);
        }
        else
        {
            printf("%d was found in the sorted array at  %d locations", key, final_count);
            printf("\n%d occurs from indices %d to %d\n\nThe indices are : \n [", key, first_occurence, last_occurence);
        }
    
        for (int i = 0; i < count; i++)
        {
            if (i+1 == count)
            {
                printf("%d]", locations[i]);
            }
            else
            printf("%d, ", locations[i]);
        }
    }

    return 0;
}