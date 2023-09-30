// this code will be reversing a string

// CURRENTLY NOT WORKING

#include <stdio.h>

int main()
{
    char s[100];
    char temp;

    printf("Enter a string : ");

    int size, i = 0, count = 0;

    s[0] = '0';

    while (s[i] != '\n')
    {
        scanf("%s", &s);
        count = count + 1;
        i = i + 1;
    }

    size = count;
    i = 0;    

    for (int i = 0; i <= size / 2; i++)
    {
        temp = s[i];
        s[i] = s[size - i -1];
        s[size - i - 1] = temp;
    }

    printf("Reversed string = %s", s);

    return 0;
}