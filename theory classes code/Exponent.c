#include <stdio.h>
int main()
{
    int base,exponent,number,i;
    printf("enter base n exponent\n");
    scanf("%d %d",&base,&exponent);
    number = 1;
    for (i = 1; i <= exponent; i++)
    {
        number = number * base;
    }
    printf("%d raised to power %d equals %d\n", base,exponent,number);
    printf("Or, %d^%d=%d", base, exponent, number);
    return 0;
}