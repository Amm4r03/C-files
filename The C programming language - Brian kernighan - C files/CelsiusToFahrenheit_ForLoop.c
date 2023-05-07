#include <stdio.h>
int main() 
{
    printf("Celsius to fahrenheit\nwritten using for loop\n");
    printf("Celsius\t\tFahrenheit\n");
    float celsius;
    for (celsius=300; celsius >= 0; celsius=celsius-10)
    {
        printf("%7.2f\t\t%5.2f\n", celsius, (celsius / 5) * 9 + 32);
    }
    
    return 0;
}