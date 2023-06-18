// reverses a string


#include <stdio.h>
#include <string.h>


int main()
{
    printf("function : reverses a string\n");
    for (int i=0; i<40;i++)
    printf("-");
    printf("\n");
    printf("Enter a string : ");
    char input_string[50];
    scanf("%s", &input_string);
    
    int length = strlen(input_string);

    char temp;

    for (int i = 0; i < length/2; i++)
    {
        temp = input_string[i];
        input_string[i] = input_string[length - i- 1];
        input_string[length - i - 1] = temp;
    }

    printf("Reverse string : %s", input_string);
    
    

    return 0;
}