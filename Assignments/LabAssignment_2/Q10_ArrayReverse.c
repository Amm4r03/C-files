// Q10 : copy contents of one array and paste into another in reverse order

#include <stdio.h>

int main()
{
    int size; 
    printf("Enter the size for the array : ");
    scanf("%d", &size);

    int InputArray[size];
    int OutputArray[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value for member %d of the array : ", i+1);
        scanf("%d", &InputArray[i]);
    }

    printf("the array received is as follows : [");
    for (int i = 0; i < size; i++)
    {
        if (i+1 == size)
        {
            printf("%d]", InputArray[i]);
        }
        else
        printf("%d, ", InputArray[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        OutputArray[size-i-1] = InputArray[i];
    }

    printf("\nThe reversed array is as follows : [");

    for (int i = 0; i < size; i++)
    {
        if (i+1 == size)
        {
            printf("%d]", OutputArray[i]);
        }
        else
        printf("%d, ", OutputArray[i]);
    }
    

    return 0;
}