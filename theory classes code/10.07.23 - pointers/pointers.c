#include <stdio.h>
int main()
{
    int a;
    a = 45;
    int *ptr;
    ptr = &a;
    int **ptr2;
    ptr2 = &ptr;

    printf("value of a - %d\naddress of a - %p\naddress of ptr1 - %p\n", a, ptr, ptr2);
    printf("value stored in ptr2 - %d", **ptr2);

    return 0;
}