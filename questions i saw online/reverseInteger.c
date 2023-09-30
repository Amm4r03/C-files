// trying to reverse an integer recursively

#include <stdio.h>
#include <math.h>

int reverseNumber(int number)
{
    if (number != 0)
    {
        int place = 0;
        int digit = number % 10;
        printf("current digit = %d\n", digit);
        printf("value for place before recursive call = %d\n", place);
        place = digit * 10 + reverseNumber(number / 10);
        printf("value for place = %d\n", place);
        return place;
    }
    else
    {
        return 0;
    }
}

int reverse(int x)
{
    int reverse = 0;

    while(x != 0)
    {
        int digit = x % 10;
        printf("***\ncurrent digit = %d\n", digit);
        reverse = reverse * 10 + digit;
        printf("current value in reverse : %d\n", reverse);
        x = x / 10;
        printf("current remaining number : %d\n ***", x);
    }
    return reverse;
}

int reverse2(int x)
{
    int reverse = 0;
    int upperLimit = (pow(2,31) - 1)/10;
    int lowerLimit = -(pow(2,31)/10);

    while(x != 0)
    {
        if (reverse > upperLimit || reverse < lowerLimit )
        {
            return 0;
        }
        else {
        int digit = x % 10;
        printf("***\ncurrent digit = %d\n", digit);
        reverse = reverse * 10 + digit;
        printf("current value in reverse : %d\n", reverse);
        x = x / 10;
        printf("current remaining number : %d\n ***", x);
        }
    }
    return reverse;
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    int y = reverse2(number);
    printf("reversed number : %d", y);
    return 0;
}