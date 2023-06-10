void print_array(int input_array[], int size)       // prints the values of the array
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", input_array[i]);
        if (i+1 != size)
        {
            printf(", ");
        }
        
    }
    printf("]\n");
}