/*

        1       
    1   2   1   
1   2   3   2   1

*/

#include <stdio.h>
int main()
{
    int lines;

    printf("Enter the number of lines for which pattern is to be printed : ");
    scanf("%d", &lines);

    // line loop
    for (int i = 0; i <= lines; i++)
    {

        // spaces loop
        for (int j = 0; j < lines - i; j++)
        {
            printf("\t");
        }

        // character input loop - 1
        for (int k = 1; k <= i; k++)
        {
            printf("%d\t", k);
        }
        printf("\n");
        
    }
     

    return 0;
}