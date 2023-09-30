//  first n numbers of the fibonacci sequence using function (use recursion)

#include <stdio.h>

int FibonacciSequence(int n)
{
    if (n <= 0) 
    {
        return 0;
    } 
    else if (n == 1) 
    {
        return 1;
    } 
    else 
    {
        return FibonacciSequence(n - 1) + FibonacciSequence(n - 2);
    }
}

int main()
{
    int number;

    printf("Enter the number of terms to be printed for the Fibonacci sequence : ");
    scanf("%d", &number);

    printf("Fibonacci sequence : ");

    for (int i = 0; i < number; i++)
    {
        printf("%d ", FibonacciSequence(i));
    }
    

    return 0;
}