// returns largest integer in array

#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value for array member %d : ", i+1);
        scanf("%d", &numbers[i]);
    }

    int max = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    
    for (int i = 0; i < 40; i++)
    {
        printf("-");
    }
    

    printf("\nThe largest number in the array is : %d", max);

    return 0;
}