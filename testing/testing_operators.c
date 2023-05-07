#include <stdio.h>
int main()
{
    int a = 5;
    int b = 12;
    printf("A = %d\n",a);
    printf("B = %d\n", b);
    int sum = a+b;
    int product = a*b;
    int remainder = b%a;
    if (a>b) {  // used if elseif condition to check the greater number between a and b
        printf("%d is greater than %d\n", a,b);
    } else if (a<b) {
        printf("%d is greater than %d\n", b,a);
    } else {
        printf("%d is equal to %d\n", a,b);
    }
    printf("sum of %d and %d is %d\n", a,b,sum);
    printf("product of %d and %d is %d\n", a,b,product);
    printf("remainder when %d is divided by %d is %d\n", b,a,remainder);
    return 0;
}