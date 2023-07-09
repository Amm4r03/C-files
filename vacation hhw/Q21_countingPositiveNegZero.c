/*
WAP to enter the numbers till the user wants and at the end it
should display the count of positive, negative and zeroes
entered. (Make use of array)
*/

#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);

    int arr[size];
    int PositiveCounter = 0, NegativeCounter = 0, ZeroCounter = 0;

    for (int i = 0; i < size; i++)
    {
        printf("Enter member %d of array : ", i+1);
        scanf("%d", &arr[i]);
        
        if (arr[i] > 0)
        {
            PositiveCounter++;
        }

        else if (arr[i] < 0)
        {
            NegativeCounter++;
        }

        else
        {
            ZeroCounter++;
        }
    }
    
    printf("The array generated is as follows : \n[");

    for (int i = 0; i < size; i++)
    {
        if (i+1 == size)
        {
            printf("%d]\n\n", arr[i]);
        }
        
        else
        printf("%d, ", arr[i]);
    }

    printf("In the above array,\nPositive values : %d\nnegative values : %d\nZeroes : %d", PositiveCounter, NegativeCounter, ZeroCounter);
    

    return 0;
}