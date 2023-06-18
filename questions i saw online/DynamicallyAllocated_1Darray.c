#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;          // stores size of array
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));       // malloc allocates memory dynamically and returns a pointer
    // we store the pointer in *arr pointer variable
    
    int array1[n];      // array declared of size n;
    int sum = 0;
    
    for (int i; i < n; i++) 
    {
        scanf("%d", &array1[i]);
        sum = sum + array1[i];
    }
    
    printf("%d", sum);      // prints sum of all members of array
    
    
    free(arr);              // frees all memory
    
    return 0;
}