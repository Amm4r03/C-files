// reverses a string input by user

#include <stdio.h>
int main()
{
    char s[100];

    printf("Enter a string : ");
    
    int i = 0, count = 0;
    do
    {
        scanf("%s", &s[i]);
        i = i + 1;
        count = count + 1;
    } 
    while (s[i] != '\n');
    s[i] = '\n';

    printf("string received is : %s", s);
    

    return 0;
}