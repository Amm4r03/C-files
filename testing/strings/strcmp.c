// testing strcmp
// compares two strings

#include <stdio.h>
#include <string.h>

int main()
{
    char A[] = "hello";
    char B[] = "hey";
    printf("string A = %s\nstring B = %s\nstrcmp result = %d", A, B, strcmp(A, B));
    return 0;
}