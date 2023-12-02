// converts decimal input to its BCD equivalent 

#include <stdio.h>
#include <stdlib.h>

void decToBin();
void binToBcd();

int main()
{
    int number;     // takes input from user as decimal number
    printf("enter : ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("0000");
        return 0;
    }
    else if (number < 0)
    {
        number = abs(number);
    }
    
    
    binToBcd(number);

    return 0;
}

void binToBcd(int input)
{
    // separates number by digits and creates binary numbers for all 
    // returns BCD number

    int digit;          // stores individual digits
    int InputDigits[9];      // assuming max digits in input number is 9

    int i = 0;

    while (input > 0)
    {
        digit = input % 10;
        input = input / 10;
        InputDigits[i] = digit;
        i += 1;
    }

    int size = i;

    for (i = size - 1; i >= 0; i--)
    {
        decToBin(InputDigits[i]);
    }
}

void decToBin(int input)
{
    int binary[4];

    for (int i = 0; i < 4 ; i++)
    {
        binary[i] = input % 2;
        input = input / 2;
    }
    
    for (int i = 3; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf(" ");
}