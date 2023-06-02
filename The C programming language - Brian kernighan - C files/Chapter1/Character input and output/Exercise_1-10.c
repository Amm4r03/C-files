#include <stdio.h>
int main()
{
    int c;
    c = getchar();

    while (c != EOF)
    {
        if (c == '\t')
        {
            putchar("\\");
            putchar("t");
        }
        else
        {
            putchar(c);
        }
        c = getchar();
    }
    
    return 0;
}