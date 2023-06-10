// chatgpt wrote this code based on the BinarySearch_MultipleEntries.c code written by me

#include <stdio.h>

void BubbleSort(int input_array[], int size) {
    int temp;
    int sorted;
    for (int i = 0; i < size - 1; i++) {
        sorted = 1;
        for (int y = 0; y < size - i - 1; y++) {
            if (input_array[y] > input_array[y + 1]) {
                temp = input_array[y];
                input_array[y] = input_array[y + 1];
                input_array[y + 1] = temp;
                sorted = 0;
            }
        }
        if (sorted)
            break;
    }
}

int SortedStatus(int input_array[], int size) {
    int sorted;
    for (int i = 0; i < size - 1; i++) {
        sorted = 1;
        for (int y = 0; y < size - i - 1; y++) {
            if (input_array[y] > input_array[y + 1]) {
                sorted = 0;
                return sorted;
            }
        }
    }
    return sorted;
}

int main() {
    int size, key;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int input_array[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the %d member of array: ", i + 1);
        scanf("%d", &input_array[i]);
    }

    printf("The array so obtained is as follows:\n[");
    for (int i = 0; i < size; i++) {
        if (i + 1 == size) {
            printf("%d]\n", input_array[i]);
        } else {
            printf("%d, ", input_array[i]);
        }
    }

    if (!SortedStatus(input_array, size)) {
        printf("The array is not sorted.\nThe sorted array is as follows:\n[");
        BubbleSort(input_array, size);

        for (int i = 0; i < size; i++) {
            if (i + 1 == size) {
                printf("%d]\n", input_array[i]);
            } else {
                printf("%d, ", input_array[i]);
            }
        }
    } else {
        printf("The array is already sorted in ascending order.\n");
    }

    printf("Enter the number to search in the array: ");
    scanf("%d", &key);

    int lower = 0;
    int upper = size;
    int locations[size];
    int count = 0;
    int first_occurence = 0;
    int last_occurence = size - 1;

    while (lower <= upper) {
        int middle = (upper + lower) / 2;

        if (input_array[middle] > key) 
        {
            upper = middle - 1;
        } 
        else if (input_array[middle] < key) 
        {
            lower = middle + 1;
        }
        else {
            locations[count] = middle;
            count++;

            if (input_array[middle - 1] == key) {
                lower = middle - 1;
                first_occurence = middle - 1;
            } else if (input_array[middle + 1] == key) {
                upper = middle + 1;
                last_occurence = middle + 1;
            } else {
                int i = 1;
                while (input_array[middle - i] == key) {
                    locations[count] = middle - i;
                    count++;
                    first_occurence = middle - i;
                    i++;
                }

                int y = 1;
                while (input_array[middle + y] == key) {
                    locations[count] = middle + y;
                    count++;
                    last_occurence = middle + y;
                    y++;
                }

                break;
            }
        }
    }

    int final_count = last_occurence - first_occurence + 1;

    if (count < 1) {
        printf("Error: %d does not exist within the array.\n", key);
    } else {
        if (count == 1) 
        {
            printf("%d was found in the sorted array.\nThe location is: ", key);
            printf("[%d]", locations[0]);
        }


        else {
            printf("%d was found in the sorted array at %d locations.\n", key, final_count);
            printf("%d occurs from indices %d to %d.\n\nThe indices are:\n", key, first_occurence, last_occurence);
            // loop for printing all indices if multiple matches found
            for (int i = first_occurence; i <= last_occurence; i++)
            {
                if (i == first_occurence)
                {
                    printf("[%d, ", i);
                }
                else if (i == last_occurence)
                {
                    printf("%d]", i);
                }
                else
                {
                    printf("%d, ", i);
                }
            }
        }
    }

    return 0;
}
