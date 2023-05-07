#include <stdio.h>

int main()
{
    printf("Celsius to Fahrenheit conversion\n\n");
    printf("Celsius\t\tFahrenheit\n");
    float celsius, fahr;
    int upper, lower, step;
    upper = 100;
    lower = 0;
    step = 5;
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (celsius / 5) * 9 + 32;
        printf("%5.0f\t\t\t%7.2f\n", celsius, fahr);
        celsius = celsius + step;  
    }
    return 0;
}