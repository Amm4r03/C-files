#include <stdio.h>

int main()
{
    float radius;
    printf("Enter radius of circle : ");
    scanf("%f", &radius);
    float pi = 3.14;
    float area = radius * radius * pi;
    printf("The area of the circle is %0.3f units squared", area);
    return 0;
}
