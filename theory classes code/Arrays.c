#include <stdio.h>
int main()
{
    int i, size, sum = 0;
    printf("Enter array size : ");
    scanf("%d", &size);
    fflush stdin;
    int array[size];
    char name[2];
    for (i = 0; i < size; i++)
    {
        if (i==1)
        {
            name[0] = 's';
            name[1] = 't';
        }
        else if (i==2)
        {
            name[0] = 'n';
            name[1] = 'd';
        }
        else if (i=3)
        {
            name[0] = 'r';
            name[1] = 'd';
        }
        else
        {
            name[0] = 't';
            name[1] = 'h';
        }
        
        printf("Enter %d %s member of the array : ", i+1,name);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
    
    for (i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }

    printf("\nsum of all members of array is : %d", sum);
    return 0;
}