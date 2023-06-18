// Write a program to count the frequency of each element in an array

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int inputArr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter member %d of the array : ");
        scanf("%d", inputArr[i]);
    }


    for (int i = 0; i < size; i++)
    {
        printf("%d", inputArr[i]);
    }
    
    

    return 0;
}