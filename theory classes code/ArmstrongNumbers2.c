#include <stdio.h>
#include <math.h>

int main()
{
    int number, digit, sum = 0, original, count = 0;
    printf("This code will check if the input number is an Armstrong number\n");
    printf("Enter a number : ");
    scanf("%d", &number);
    original = number;

    // Counting the number of digits in the input number
    while (number != 0)
    {
        number /= 10;
        count++;
    }

    // Storing the digits and their cubes in separate arrays
    int digits[count];
    int cubes[count];
    int i = 0;

    number = original; // Resetting number to original input value

    while (number != 0)
    {
        digit = number % 10;
        digits[i] = digit;
        cubes[i] = pow(digit, 3);
        sum += cubes[i];
        i++;
        number /= 10;
    }

    // Displaying the cubes of all the digits and their sum
    printf("The cubes of all digits in %d are: ", original);
    for (int j = count - 1; j >= 0; j--)
    {
        printf("%d, ", cubes[j]);
    }
    printf("\nThe sum of the cubes of all digits is %d\n", sum);

    // Checking if the input number is an Armstrong number
    if (sum == original)
    {
        printf("%d is an Armstrong number\n", original);
    }
    else
    {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}
