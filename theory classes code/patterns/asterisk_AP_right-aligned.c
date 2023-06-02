/*

            *
        *   *
    *   *   *
*   *   *   *

*/


#include <stdio.h>
int main()
{
    int lines;

    printf("Enter number of lines for which pattern is to be printed : ");
    scanf("%d", &lines);
    
    for (int i = 0; i <= lines; i++)            // loop runs for as long as i is smaller than or equal to lines
    {                                   // this loop is responsible for the lines of the output
        for (int j = 0; j < lines - i; j++)     // this loop runs for as long as the value of j is smaller than the value of (lines - i)
        {
            printf("   ");              // this prints the spaces for (total lines - line number) times 
        }                               // this sets our characters ready to be right-aligned

        for (int k = 1; k <= i; k++)    // runs for as long as k is smaller or equal to i
        {
            printf("*  ");              // prints the required character
        }
        printf("\n");
    }
    
/* The code uses nested loops. the first loop is used for the number of lines that the output would have
the pattern
the second loop that runs on the j variable is responsible for adding the spaces in the output
Once the spaces are added the third loop adds in the asterisks with spaces that maintain the shape of output


the first loop runs for as many times as the number of lines (input taken from user)

the second loop that adds spaces runs for (total lines - current line number) times. It uses the i variable to
check the line number and the lines variable is already known

Now, the third loop runs for i times and adds the required character

Note that the spaces loop prints 3 spaces on every iteration and the character printing loop prints
the character and 2 more spaces

 */

    return 0;
}