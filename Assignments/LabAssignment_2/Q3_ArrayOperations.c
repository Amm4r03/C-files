/*      Q3 :  Write a function that receives an integer array and returns 
        the sum, average, median, mode and standard deviation of it            */


#include <stdio.h>
#include <math.h>

int sumOfArray(int input[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + input[i];
    }
    return sum;
}

float averageOfArray(int input[], int size)
{
    int sum = sumOfArray(input, size);
    float average = (float) sum / size;
    return average;
}

void bubbleSort(int input[], int size)
{
    int temp;
    int sorted;

    for (int y = 0; y <= size-1; y++)
    {
        sorted = 1;     // assume that array is sorted

        for (int j = 0; j < size - y - 1; j++)
        {
            if (input[j] > input[j + 1])
            {
                temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp; 
                sorted = 0;     // denotes that array is not sorted yet and a change has taken place in iteration
            }  
        }  

        if (sorted)
        break;
    }
}

float medianOfArray(int input[], int size)
{
    float median;

    bubbleSort(input, size);

    if (size % 2 == 0)
    {
        median = (float) ( input [size / 2] + input [ ( size / 2 ) - 1 ] ) / 2 ;
    }
    else
    {
        median = input[size/2];
    }
    return median;   
}

int modeOfArray(int array[], int size)
{
    int mode;
    int count, max = 0;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if(array[j] == array[i])
            {
                count++;
            }
        }   

        if (count > max)
        {
            max = count;
            mode = array[i];
        }   
    }
    return mode;
}

float standardDeviation(int array[], int size)
{
    float mean = averageOfArray(array, size);
    float sumOfDifferences = 0;

    for (int i = 0; i < size; i++)
    {
        float difference = array[i] - mean;
        sumOfDifferences = sumOfDifferences + difference * difference;
    }
    
    float variance = sumOfDifferences / size;
    float stdDev = sqrt(variance);

    return stdDev;
}

int main()
{
    int size;
    printf("enter the size of array : ");
    scanf("%d", &size);

    int InputArray[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value for member %d of the array : ", i+1);
        scanf("%d", &InputArray[i]);
    }

    printf("The array obtained is as follows : \n[");

    for (int i = 0; i < size; i++)
    {
        if (i + 1 == size)
        {
            printf("%d]\n\n", InputArray[i]);
        }
        else
        printf("%d, ", InputArray[i]);
    }

    int sum = sumOfArray(InputArray, size);
    float average = averageOfArray(InputArray, size);
    float median = medianOfArray(InputArray, size);
    int mode = modeOfArray(InputArray, size);
    float sd = standardDeviation(InputArray, size);

    printf("Sum of all members of array is : %d\n", sum);
    printf("Average of all members of array is : %0.2f\n", average);
    printf("The median of all members of array is : %0.2f\n", median);
    printf("Mode of the given array is : %d\n", mode);
    printf("The standard deviation of the array is : %0.2f", sd);
}