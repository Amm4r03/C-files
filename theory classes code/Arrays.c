#include <stdio.h>
int main()
{
    int i, size, sum = 0;
    printf("Enter array size : ");
    scanf("%d", &size);

    int array[size];
    char name[3];
    
    for (i = 0; i < size; i++)
    {
        if ((i+1)%10 == 1)
        {
            name[0] = 's';
            name[1] = 't';
        }
        else if ((i+1) %10 == 2)
        {
            name[0] = 'n';
            name[1] = 'd';
        }
        else if ((i+1)%10 == 3)
        {
            name[0] = 'r';
            name[1] = 'd';
        }
        else
        {
            name[0] = 't';
            name[1] = 'h';
        }
        
        printf("Enter %d%s member of the array : ", i+1,name);
        scanf("%d", &array[i]);
    }
    printf("The array generated is as follows : \n[");

    for (i = 0; i < size; i++)
    {
        if(i+1 == size)
        printf("%d]", array[i]);
        
        else
        printf("%d, ", array[i]);
    }
    
    for (i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }

    printf("\nsum of all members of array : %d", sum);
    return 0;
}