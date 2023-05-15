#include <stdio.h>

int main()
{
    printf("Fahrenheit to Celsius conversion\n");
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 10;
    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper)                               
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%5.0f\t\t\t%6.2f\n", fahr,celsius);
        fahr = fahr + step;
    }
    /* The while loop goes on until the condition is true. Here the loop would work until the
    value of 'fahr' goes over the upper integer. After the condition is true, the while loop is 
    executed completely and then the next line is executed - which in our case is nothing and
    thus the code terminates here */
    return 0;
}