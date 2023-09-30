// sort names in ascending order of length of names without using predefined library functions

#include <stdio.h>

#define TOTAL_NAMES 3
#define MAX_NAME_LENGTH 50

int stringLength(char name[TOTAL_NAMES][MAX_NAME_LENGTH])
{
    int length = 0;

    for (int i = 0; i < TOTAL_NAMES; i++)
    {
        for (int j = 0; j < MAX_NAME_LENGTH; j++)
        {
            if (name[i][j] == '\0')
            {
                break;
            }
            length = length + 1;
        }
    }
    
    return length;
}

int main()
{

    char Name[TOTAL_NAMES][MAX_NAME_LENGTH];

    int length[TOTAL_NAMES];

    for (int i = 0; i < TOTAL_NAMES; i++)
    {
        printf("enter your name : ");
        scanf("%s", Name[i]);
        while (getchar() != '\n');  
        printf("name length : %d\n", stringLength(Name));
    }
    

    return 0;
}