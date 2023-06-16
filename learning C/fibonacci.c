// prints the fibonacci sequence

#include <stdio.h>
int main()
{
    int rank;
    printf("Enter a number : ");
    scanf("%d", &rank);

    int fibonacci[rank];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i < rank; i++)
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    
    int ways;

    ways = fibonacci[rank-1] + fibonacci[rank-2];

    printf("%d", ways);

    return 0;
}