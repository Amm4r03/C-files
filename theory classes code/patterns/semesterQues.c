/*
print the following pattern

        A
    A   B
A   B   C
    A   B
        A
*/

#include <stdio.h>
int main()
{
    int rows = 5, cols = 3;

    // line loop
    for (int i = 0; i < rows; i++)
    {
        char letter = 'A';
        int spaces = 2;

        // spaces loop
        for (int j = 0; j < cols - i + 1; j++)
        {
            printf("\t");
        }

        // character input
        for (int k = 0; k < i - 1; k++)
        {
            printf("%c", letter);
            letter = letter + 1;
        }
        
        printf("\n");
    }
    
    return 0;
}