// testing strlen

#include <stdio.h>
#include <string.h>

int main()
{
    char test[50];
    do
    {
        scanf("%s", test);
    } while (getchar() != '\n');
    

    printf("length = %zu", strlen(test));
}