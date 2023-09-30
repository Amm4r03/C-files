/*
Q7 : perform the appropriate operation of addition subtraction multiplication 
or division as input by user on two numbers input by user
*/

#include <stdio.h>

int main()
{
    printf("Enter two numbers : ");
    float n1, n2;
    scanf("%f %f", &n1, &n2);

    printf("\nChoose one of the following\n1 : Add the numbers\n2 : subtract the numbers\n3 : multiply the numbers\n4 : divide the numbers\nEnter your choice : ");

    int response;
    scanf("%d", &response);

    switch (response)
    {
    case 1:
        printf("%0.0f + %0.0f = %0.0f", n1, n2, n1 + n2);
        break;

    case 2:
        printf("%0.0f - %0.0f = %0.0f", n1, n2, n1-n2);
        break;
    
    case 3:
        printf("%0.0f * %0.0f = %0.0f", n1, n2, n1 * n2);
        break;

    case 4:
        printf("%0.0f / %0.0f = %0.2f", n1, n2, n1 / n2);
        break;
    
    default:
        printf("invalid reponse : quitting...");
        break;
    }

    return 0;
}