// performs linear search and finds results from array input by user

#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size : ");
    scanf("%d", &size);
    
    int number_array[size];
    int key;

    

    for (int i = 0; i < size; i++)
    {
        printf("Enter member %d of array : ", i+1);
        scanf("%d", &number_array[i]);
    }

    printf("The array so generated is as follows\n[");

    for (int i = 0; i < size; i++)
    {
        if (i+1 == size)
        {
            printf("%d]", number_array[i]);
        }
        else
        printf("%d, ", number_array[i]);
    }
    
    printf("\nEnter the number to search in the array : ");
    scanf("%d", &key);

    int count=0;
    int locations[size];

    for (int i = 0; i < size; i++)
    {
        if (number_array[i] == key)
        {
            locations[count] = i;
            count++;
        }
    }

    if (count == 0)
    {
        printf("Error : %d was not found in the array", key);
    }
    else
    {
        if (count == 1)
        {
            printf("%d was found in the array at the following index : ", key);
        }
        else
        {
            printf("%d was found in the array at the following indices : ", key);
        }
        
        
        for (int i = 0; i < count; i++)
        {
            if (i+1 == count)
            {
                printf("%d", locations[i]+1);
            }
            else
            printf("%d, ", locations[i]+1);
        }
        
    }
    
    

    return 0;
}