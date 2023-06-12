#include <stdio.h>

int main()
{
    char roman[30];     // assume maximum length of roman number is 30
    printf("Enter the roman number : ");
    int romanVal[30];
    int i;

    for (i = 0; i < sizeof(roman) - 1; i++)
    {
        scanf("%c", &roman[i]);

        if (roman[i] == '\n')
        {
            break;
        }
    }

    roman[i] = '\0';

    int size = i;

    for (int y = 0; y < size; y++)
    {
        if (roman[y] == 'I')
        {
            romanVal[y] = 1;
        }
        else if (roman[y] == 'V')
        {
            romanVal[y] = 5;
        }
        else if(roman[y] == 'X')
        {
            romanVal[y] = 10;
        }
        else if(roman[y] == 'L')
        {
            romanVal[y] = 50;
        }
        else if(roman[y] == 'C')
        {
            romanVal[y] = 100;
        }
        else if(roman[y] == 'D')
        {
            romanVal[y] = 500;
        }
        else if(roman[y] == 'M')
        {
            romanVal[y] = 1000;
        }
    }

    int sum = 0;

    for (int y = 0; y < size-1; y++)
    {
        if (romanVal[y] < romanVal[y+1])
        {
            sum = sum + - romanVal[y];
        }
        else
        sum = sum + romanVal[y];
    }
    sum = sum + romanVal[size-1];


    printf("%d", sum);

    return 0;
}