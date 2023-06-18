#include <stdio.h>
int main()
{
    int size;
    printf("Function : finds the smallest and largest members of an array entered by user\n");
    
    for (int i = 0; i < 40; i++)
    printf("-");
    printf("\n");

    printf("Enter size of array : ");
    scanf("%d", &size);

    int input_array[size];
    int largest;
    int smallest;

    for (int i = 0; i < size; i++)
    {
        printf("Enter member %d of array : ", i+1);
        scanf("%d", &input_array[i]);
        if (i == 0)
        {
            largest = input_array[0];
            smallest = input_array[0];
        }
        else
        {
        largest = input_array[i] > largest ? input_array[i] : largest;
        smallest = input_array[i] < smallest ? input_array[i] : smallest;
        }

        if (i+1 == size)
        {
            for (int i = 0; i < 40; i++)
            printf("-");
            printf("\n");
        }
        
    }

    printf("The array generated is as follows : [");

    for (int i = 0; i < size; i++)
    {
        if(i + 1 == size)
        {
            printf("%d]", input_array[i]);
        }
        else
        {
        printf("%d, ", input_array[i]);
        }
    }
    
    printf("\nlargest number in the array : %d\n", largest);

    printf("smallest number in the array : %2d", smallest);
    

    return 0;
}