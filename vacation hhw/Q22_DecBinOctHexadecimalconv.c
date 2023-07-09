/*
WAP to receive an integer and find its binary, octal and hexadecimal equivalent
*/

#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    //binary conversion
    int BinDigits[8];

    int temp = number;
    for (int i = 0; i < 8; i++)
    {
        BinDigits[i] = temp % 2;
        temp = temp / 2;
    }

    printf("Binary\t:  ");
    
    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", BinDigits[i]);
    }

    // Octal conversion
    int OctDigits[8];
    temp = number;
    for (int i = 0; i < 8; i++)
    {
        OctDigits[i] = temp % 8;
        temp = temp / 8;
    }

    printf("\nOctal\t:  ");

    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", OctDigits[i]);
    }
    
    // Hexadecimal conversion
    int HexDigits[8];
    temp = number;
    int y;
    for (y = 0; y < 8 ; y++)
    {
        HexDigits[y] = temp % 16;
        temp = temp / 16;
    }
    

    printf("\nHex\t:  ");

    for (int i = 7; i >= 0; i--)
    {
        if (HexDigits[i] == 10)
        {
            printf("A ");
            continue;
        }
        else if (HexDigits[i] == 11)
        {
            printf("B ");
            continue;
        }
        else if (HexDigits[i] == 12)
        {
            printf("C ");
            continue;
        }
        else if (HexDigits[i] == 13)
        {
            printf("D ");
            continue;
        }
        else if (HexDigits[i] == 14)
        {
            printf("E ");
            continue;
        }
        else if (HexDigits[i] == 15)
        {
            printf("F ");
            continue;
        }
        else
        {
            printf("%d ", HexDigits[i]);
        }
    }
    
    
    
    return 0;
}