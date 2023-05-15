#include <stdio.h>
int main()
{
    int i, copies, lines, tabs;
    printf("Enter number of lines for generating pattern : ");
    scanf("%d", &lines);
    copies = 1;
    for (i = 1; i <= lines; i++)
    {

        for (tabs = 1; tabs <= (lines - i); tabs++)
        {
            printf("\t");
        }
        

        if (i%2 == 0)
        {
            while (copies <= i)

            {                
                printf("#\t");
                copies ++;
            }
            printf("\n");
            copies = 1;
            
        }

        else
        {
            while (copies <= i)
            {
                printf("*\t");
                copies ++;
            }
            printf("\n");
            copies = 1;
            
        }

    }
    return 0;
}