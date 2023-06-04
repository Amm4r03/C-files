// code written by chat gpt, not me
// i asked gpt to write this code to check how differently it would write the code for the same problem
// check asterisk_diamond.c to check how i wrote the code for this

#include <stdio.h>

int main()
{
    int lines;

    printf("Enter number of lines for which pattern is to be printed: ");
    scanf("%d", &lines);

    if (lines % 2 == 0)
    {
        printf("NOTE: Pattern with %d lines is not possible, printing a pattern with %d lines instead\n", lines, lines - 1);
        lines--;
    }

    int spaces = lines / 2;
    int asterisks = 1;

    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= asterisks; k++)
        {
            printf("* ");
        }

        printf("\n");

        if (i <= lines / 2)
        {
            spaces--;
            asterisks += 2;
        }
        else
        {
            spaces++;
            asterisks -= 2;
        }
    }

    return 0;
}
