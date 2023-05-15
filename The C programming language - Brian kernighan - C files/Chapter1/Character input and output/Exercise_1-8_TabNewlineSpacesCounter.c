#include <stdio.h>
int main()
{
    int c;
    int num_lines = 0;
    int num_tabs = 0;
    int num_spaces = 0;

    c = getchar();

    while (c != EOF)
    {
        if (c == '\n')          // if condition detects if the input is a newline character
        {
        /* the \n is stored in the int variable C as numeric values on the basis of the ASCII system
        This is also why \n is stored in single quotes */

            ++num_lines;        // num_lines variable gets incremented by 1 if condition is true
        }
        else if (c == '\t')
        {
            ++num_tabs;
        }
        else if (c == ' ')
        {
            ++num_spaces;
        }
        
        c = getchar();
    }
        printf("Number of lines : %d\n", num_lines);
        printf("Numbr of tabs : %d\n", num_tabs);
        printf("Numer of spaces : %d\n", num_spaces);
    
    return 0;
}