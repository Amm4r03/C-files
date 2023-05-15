#include <stdio.h>
int main()
{
    int c;
    int num_lines = 0;
    c = getchar();
    while (c != EOF)
    {
        if (c == '\n')          // if condition detects if the input is a newline character
        
        /* the \n is stored in the int variable C as numeric values on the basis of the ASCII system
        This is also why \n is stored in single quotes */

        {
            ++num_lines;        // num_lines variable gets incremented by 1 if condition is true
        }
        c = getchar();
    }
        printf("Number of lines : %d", num_lines);
    
    return 0;
}

/* I havent figured how to enter the EOF character. The book says Ctrl + Z should work but it isnt
Ctrl + C is the other shortcut that I tried but that kills the terminal instead of moving to the next
line of code

Current solution : Scale the terminal window up or down in VSC integrated terminal and that triggers
the EOF character */