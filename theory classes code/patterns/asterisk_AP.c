/*
*
*  *
*  *  *
*  *  *  *
*/

#include <stdio.h>
int main()
{
    int lines;              // declare  a variable to take input for no. of lines of pattern to generate
    printf("number of lines for which pattern is to be printed : ");
    scanf("%d", &lines);    // take input
    for (int i = 1; i <= lines; i++)    // initiate loop to run the for the number of lines input by user
    {
        for (int j = 1; j <= i; j++)    // inner loop inserts characters in each line
        {                               // condition checks if j is smaller than i and then prints the character
            printf("*  ");
        }
        printf("\n");                   // newline statement is added when the inner loop is completed 
                                        // newline ensures next outer loopl and inner loop is executed in next line
    }
    // i represents the line number and j represents the number of copies in that line
    return 0;
}