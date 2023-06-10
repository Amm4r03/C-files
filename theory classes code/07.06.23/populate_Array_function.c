void populate_array(int input_array[], int size)    // inputs values into the array
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d member of array : ", i+1);
        scanf("%d", &input_array[i]);
    }
}