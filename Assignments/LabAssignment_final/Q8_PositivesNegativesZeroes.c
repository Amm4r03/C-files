// WAP to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeroes entered. (Make use of array)

#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of input array : ");
    scanf("%d", &size);

    int inputArray[size];

    int pos = 0;
    int neg = 0;
    int zeroes = 0;

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value for member %d of the array : ", i+1);
        scanf("%d", &inputArray[i]);

        if (inputArray[i] > 0)
        {
            pos = pos + 1;
        }
        else if (inputArray[i] < 0)
        {
            neg = neg + 1;
        }
        else
        {
            zeroes = zeroes + 1;
        }   
    }
    
    for(int i = 0; i < 25; i++)
    {
        printf("-");
    }

    printf("\nthe input array has\n%d positive number(s)\n%d negative number(s), and\n%d zero(es)", pos, neg, zeroes);


    return 0;
}