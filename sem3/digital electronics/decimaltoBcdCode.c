// converts decimal input to its BCD equivalent 

#include <stdio.h>
#include <string.h>

void decToBin();
void binToBcd();

int main()
{
    int number;     // takes input from user as decimal number
    printf("enter : ");
    scanf("%d", &number);

    decToBin(number);

    return 0;
}



void decToBin(int input)
{
    int binary[4];

    for (int i = 0; i < 4 ; i++)
    {
        binary[i] = input % 2;
        input = input / 2;
    }
    
    for (int i = 3; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }   
}