// WAP to illustrate the use of bitwise operators in C (AND, OR and XOR)

#include <stdio.h>

void Dashes()
{
    printf("\n");
    for (int i = 0; i < 33; i++)
    {
        printf("-");
    }
    printf("\n");
}

void DecimalToBinary(int number)
{
    int size = 32;    

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


void AndFunction(int a, int b)
{

    printf("AND function\n%d\t=\t", a);
    DecimalToBinary(a);

    printf("\n");

    printf("%d\t=\t", b);
    DecimalToBinary(b);

    Dashes();

    printf("%d\t=\t", a&b);
    DecimalToBinary(a&b);

}

void OrFunction(int a, int b)
{

    printf("OR function\n%d\t=\t", a);
    DecimalToBinary(a);

    printf("\n");

    printf("%d\t=\t", b);
    DecimalToBinary(b);

    Dashes();

    printf("%d\t=\t", a|b);
    DecimalToBinary(a|b);

}

void XorFunction(int a, int b)
{

    printf("XOR function\n%d\t=\t", a);
    DecimalToBinary(a);

    printf("\n");

    printf("%d\t=\t", b);
    DecimalToBinary(b);

    Dashes();

    printf("%d\t=\t", a^b);
    DecimalToBinary(a^b);

}

void NotFunction(int a, int b)
{

    printf("NOT function\nNOT %d\n%d\t=\t", a,a);
    DecimalToBinary(a);
    Dashes();
    printf("%d\t=\t", ~a);
    DecimalToBinary(~a);

    printf("\n");

    printf("NOT %d\n%d\t=\t", b, b);
    DecimalToBinary(b);
    Dashes();
    printf("%d\t=\t", ~b);
    DecimalToBinary(~b);

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

    printf("Enter :\n1 to see AND operation\n2 to see OR operation\n3 to see XOR operation\n4 to see NOT function (performed separately on both input numbers)\nEnter a number : ");
    
    do
    {
        scanf("%d", &input);

        if (input != 1 && input != 2 && input != 3 && input != 4)
        {
            printf("Invalid input - try again\n");
            printf("Enter a number (1-4) : ");
        }

    } while (input != 1 && input != 2 && input != 3 && input != 4);
    
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
    else if (input == 4)
    {
        NotFunction(a,b);
    }

    return 0;
}