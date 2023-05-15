#include <stdio.h>
int main()
{
    long nc = 0;                // initialise a long variable nc and set its value to 0
    while (getchar() != EOF)    // loop will run until EOF character is detected
        nc++;                   // value of nc incremented by 1
        printf("%ld\n", nc);    // value of nc printed
    

    return 0;
}

/*the nc variable is counting the number of characters in the input*/