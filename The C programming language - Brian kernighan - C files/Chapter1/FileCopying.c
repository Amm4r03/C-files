#include <stdio.h>
int main()
{
    int c;
    c = getchar();          // C given getchar function
    while (c != EOF)        // EOF means End of File
    {
        putchar(c);         // prints out value stored in C
        c = getchar();      // checks for next character
    }                       // loop repeats until compiler reaches the end of file


    /* the loop will keep running until it encounters the EOF character
    for windows the EOF can be triggered by using the Ctrl+Z combination
    In the VSC terminal window, Ctrl+C ends the loop*/
    
    return 0;
}