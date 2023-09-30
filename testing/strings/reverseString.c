// reverses a string input by user

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];            // array of size 100 declared
    do
    {
        scanf("%s", s);
    } 
    while (getchar() != '\n');      // takes input till enter key is entered

    int length = strlen(s);         // length of string calculated (can be done without library function as well)
    
    for (int i = 0; i < length; i++)
    {
        printf("%c", s[length - 1 - i]);    // prints string in reverse one by one (1 character at a time)
    }   
}