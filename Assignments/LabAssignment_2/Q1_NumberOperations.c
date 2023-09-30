/*
Q1 : Write a menu driven program which has the following options
    - compute a!
    - check if input number is prime or not
    - check if number is odd or even
    - exit
*/

#include <stdio.h>

// declaration of functions
int quit();
int menu();
int main();
void QuitorReturn();

// function definitions
void aNot()
{
    int number;
    printf("enter a number : ");
    scanf("%d", &number);
    printf("NOT %d = %d", number, ~number);
    QuitorReturn();
}

// function definitions
void QuitorReturn()
{
    int input;
    printf("\n\nPress : \n1 to go back to main menu\n2 to exit the code \nEnter your choice : ");
    scanf("%d", &input);
    while (input > 2 || input < 1)
    {
        printf("invalid input, please try again\nEnter a number (1 or 2) : ");
        scanf("%d", &input);
    }
    if (input == 1)
    {
        main();
    }
    else
    quit();
}

void PrimeChecker()
{
    long num;
    printf("Enter a number : ");
    scanf("%ld", &num);
    if (num == 2)
    {
        printf("Number is prime");
    }
    else if (num % 2 == 0)
    {
        printf("Number is not prime");
    }
    else if (num < 2)
    {
        printf("Number is not prime");
    }
    else
    {
    int i;
    for (i = 3; i <= ((num/2) + 1); i++)
    {
        if(num % i == 0)
        break;
    }
    if (i >= ((num/2)+1))
    {
        printf("Number is prime");
    }
    else
    {
        printf("number is not prime");
    }
    }
    QuitorReturn();
}

void OddEvenCheck()
{
    int number;
    printf("enter a number : ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    QuitorReturn();
}

int quit()
{
    return 0;
}

int menu()
{
    int input;
    printf("---- Main Menu ----\nChoose one of the following : \n1. compute NOT(a)\n2. check if number is prime or not\n3. check if number entered is odd or even\n4. exit\nEnter your choice (1-4) : ");
    scanf("%d", &input);
    while (input > 4 || input < 1)
    {
        printf("invalid input, please try again\nEnter a number (1-4) : ");
        scanf("%d", &input);
    }
    return input;
}

int main()
{
    int input = menu();
    if (input == 1)
    {
        aNot();
    }
    else if (input == 2)
    {
        PrimeChecker();
    }
    else if (input == 3)
    {
        OddEvenCheck();
    }
    else if(input == 4)
    {
        quit();
    }
    else
    return 0;

    return 0;
}