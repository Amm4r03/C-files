// converts decimal numbers to binary

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    int size;

    if (number < 255)      
    {
        size = 8;       // sets size to 1 byte
    }
    else if (number > 16777215)
    {
        size = 32;
    }
    else if (number > 65535)
    {
        size = 24;      // sets size to 3 bytes
    }
    else if (number > 255)
    {
        size = 16;      // sets size to 2 bytes
    }
    else if ( number > 4294967295 )
    {
        printf("number too large to be represented in integer data type");
    }
    
    

    int digits[size];
    int digit;

    for (int i = 0; i < size; i++)
    {
        digit = number % 2;
        digits[i] = digit;
        number = number / 2;
    }

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", digits[i]);
    }
    
    

    return 0;
}