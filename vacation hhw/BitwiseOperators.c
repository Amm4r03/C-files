// WAP to illustrate the use of bitwise operators in C

#include <stdio.h>

void DecimalToBinary(int number)
{
    int size;

    if ( number > 4294967295 )
    {
        printf("number too large to be represented in integer data type");
        return 0;
    }
    else if (number < 255)
    {
        size = 8;       // sets size to 1 byte
    }
    else if (number > 16777215)
    {
        size = 32;      // sets size to 4 bytes (max for int data type)
    }
    else if (number > 65535)
    {
        size = 24;      // sets size to 3 bytes
    }
    else if (number > 255)
    {
        size = 16;      // sets size to 2 bytes
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
}


int main()
{
    printf("this functions demonstrates the use of bitwise operators in C\n");
    int a = 3, b = 2;
    printf("%d", a&b);
    return 0;
}