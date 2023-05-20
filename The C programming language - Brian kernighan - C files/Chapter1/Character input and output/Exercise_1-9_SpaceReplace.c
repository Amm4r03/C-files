// WAP to copy its input to its output, replacing each string of one or more blanks by a single blank

#include  <stdio.h>
int main()
{
    int c = getchar();
    int LastCharSpace = 0;              // declared a variable to check if last character was a space
    // 1 means last character was a space and else otherwise

    while (c != EOF)
    {
        if (c == ' ')                   // Checks if input is a space character
        {
            if (LastCharSpace == 0)     // checking is last character was a space too
            {
                putchar(c);             // if not, character will be printed
            }
            LastCharSpace = 1;          // last character checker is now set to 1 
        }
        
        else
        {
            putchar(c);                 // if first statement is false, character is printed
            LastCharSpace = 0;          // last character is not a space
        }
        
        c = getchar();
    }
    
    return 0;
}