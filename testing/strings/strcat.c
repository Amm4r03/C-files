// testing strcat
// concatenates two strings

#include <stdio.h>
#include <string.h>

int main()
{
    char A[] = "Hello";
    char B[] = "World!";
    printf("string A = %s\nstring B = %s\nconcatenated string = %s", A, B, strcat(A, B));
    return 0;
}