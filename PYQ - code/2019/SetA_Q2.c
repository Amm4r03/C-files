// write a menu driven program in C to apply addition, subtraction, multiplication, division, and
// modulus operators on two numbers (integer / real)

#include <stdio.h>

float addNumbers(float n1, float n2)
{
    float sum = n1 + n2;
    return sum;
}

float subtractNumbers(float n1, float n2)
{
    float difference = n1 - n2;
    return difference;
}

float multiplyNumbers(float n1, float n2)
{
    float product = n1 * n2;
    return product;
}

float divideNumbers(float n1, float n2)
{
    float quotient = n1 / n2;
    return quotient;
}

int mod(int n1, int n2)
{
    int result = n1 % n2;
    return result;
}

int menu()
{
    int choice;
    printf("--- MAIN MENU ---\n");
    printf("1 : Add two numbers\n");
    printf("2 : Subtract two numbers\n");
    printf("3 : Multiply two numbers\n");
    printf("4 : Divide two numbers\n");
    printf("5 : Calculate modulus of two numbers\n\n");
    printf("enter your choice : ");
    int i=0;
    do
    {
        if (i > 0)
        {
            printf("Invalid input, please try again\nenter your choice (1-5) : ");
            scanf("%d", &choice);
        }
        else
        scanf("%d", &choice);

        i = i + 1;
    }
    while (choice < 1 || choice > 5);
}

int main()
{
    float n1, n2;
    printf("Enter two numbers (separated by a space) : ");
    scanf("%f %f", &n1, &n2);

    int choice = menu();

    switch (choice)
    {
    case 1:
        printf("The sum of the numbers is %0.2f", addNumbers(n1, n2));
        break;
    
    case 2:
        printf("The difference of the numbers is %0.2f", subtractNumbers(n1,n2));
        break;

    case 3:
        printf("The product of the numbers is %0.2f", multiplyNumbers(n1, n2));
        break;

    case 4:
        printf("%0.2f divided by %0.2f gives %0.2f", n1, n2, divideNumbers(n1, n2));
        break;

    case 5:
        printf("%0.2f %% %0.2f = %d", n1, n2, mod(n1,n2));
        break;

    default:
        break;
    }

    return 0;
}