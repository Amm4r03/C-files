/*
            *
        *   *   *
    *   *   *   *   *
*   *   *   *   *   *   *
    *   *   *   *   *
        *   *   *
            * 
*/

#include <stdio.h>
int main()
{
    int lines;
    int inp_lines;

    printf("Enter number of lines for which pattern is to be printed : ");
    scanf("%d", &inp_lines);

    lines = ( inp_lines + 1 ) / 2;

    if (inp_lines % 2 == 0)
    {
        printf("NOTE : pattern with %d lines is not possible, printing a pattern with %d lines instead\n", inp_lines, inp_lines - 1);
    }
    

    // top part of the loop
    // loop initiation
    for (int i = 0; i <= lines; i++)
    {

        // spaces loop
        for (int j = 0; j < lines - i; j++)
        {
            printf("  ");
        }

        // character input loop - 1
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        
        // character input loop - 2
        for (int l = 1; l < i; l++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    // bottom part of the diamond 

    // loop initiation
    for (int i = 1 ; i <= lines-1 ; i++)
    {

        // spaces loop
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }

        // character input loop - 3
        for (int k = 0; k < lines - i; k++)
        {
            printf("* ");
        }
        
        // character input loop - 4
        for (int l = 0; l < lines - i - 1; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}