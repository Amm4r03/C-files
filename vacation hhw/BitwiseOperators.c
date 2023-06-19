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
    printf("this functions demonstrates the use of bitwise operators in C");
    
    Dashes();

    int a, b;

    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Enter another number : ");
    scanf("%d", &b);

    int input;

    printf("Enter :\n1 to see AND operation\n2 to see OR operation\n3 to see XOR operation\nEnter a number : ");
    
    do
    {
        scanf("%d", &input);

        if (input != 1 && input != 2 && input != 3)
        {
            printf("Invalid input - try again\n");
            printf("Enter a number (1-3) : ");
        }

    } while (input != 1 && input != 2 && input != 3);
    
    if (input == 1)
    {
        AndFunction(a,b);   
    }
    else if (input == 2)
    {
        OrFunction(a,b);
    }
    else if (input == 3)
    {
        XorFunction(a,b);
    }
    

    return 0;
}