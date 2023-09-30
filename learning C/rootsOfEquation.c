// calculates the roots of any quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf(" - - - QUADRATIC EQUATION SOLVER - - -\n");
    printf("ax^2 + bx + c\nEnter the value for a : ");
    scanf("%f", &a);

    printf("enter value for b : ");
    scanf("%f", &b);

    printf("enter the value for c : ");
    scanf("%f", &c);

    float root1, root2;

    float discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant < 0)
    {
        printf("No real roots exist for the given equation");
        return 0;
    }
    
    else
    {
        root1 = (-b + sqrt( discriminant )) / (2 * a);

        root2 = (-b - sqrt( discriminant )) / (2 * a);
        
        if (root1 == root2)
        printf("%0.2f is the root of this equation", root1);
        
        else
        printf("The roots of the given equation are %0.2f and %0.2f", root1, root2);
    }

    return 0;
}