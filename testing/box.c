// draws a box maybe

#include <stdio.h>
int main()
{
    
    int number = 1;

    printByteBox(number);
    printByteBox(0);

    return 0;
}

void printByteBox(int byte){ 
    printf("┌─┐\n");
    printf("│%d│\n", byte);
    printf("└─┘\n");
}
    