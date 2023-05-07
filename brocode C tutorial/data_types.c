#include <stdio.h>
#include <stdbool.h>
int main()
{
    char a = 'A';           // single character                 (%c)
    char b[] = "single";    // array of characters              (%s)
    float c = 3.1459;       // 32 bits precision (6-7 digits)   (%f)
    double d = 1.12312355;  // 64 bits precision (15-16 digits) (%lf)
    bool e = true;          // true or false                    (%d)
                            /* include stdbool.h in header file if bool is to be used
                            */
    char alphabet = 40;
    printf("%c", alphabet);
    return 0; 
}