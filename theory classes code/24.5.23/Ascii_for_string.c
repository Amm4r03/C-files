#include <stdio.h>
int main()
{
    printf("Converts character string to ASCII\nEnter a string : ");

    char c;
    scanf("%c", &c);
    char arr[100];
    int i;

    for (i = 0; c != '\n'; i++)
    {
        arr[i] = c;
        scanf("%c", &c);
    }

    printf("The recorded characters and the corresponding ASCII values are as follows :\n");

    for (int y = 0; y < i; y++)
    {
        if (y+1 == i)
        {
            printf("%c\n", arr[y]);
        }
        else
        printf(" %c\t", arr[y]);
    }
    


    for (int y = 0; y < i; y++)
    {
        printf("%d\t", arr[y]);
    }
    
    
    return 0;
}