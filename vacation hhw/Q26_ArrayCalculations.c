/*
Write a function that receives an integer array and returns the
sum, average, mean, mode and standard deviation of it
*/
#include <stdio.h>
#include <math.h>

void BubbleSort(int input_array[], int size)
{
    int temp;
    int sorted;

    for (int i = 0; i < size - 1; i++)
    {
        sorted = 1;
        for (int y = 0; y < size - i - 1; y++)
        {
            if (input_array[y] > input_array[y+1])
            {
                temp = input_array[y];
                input_array[y] = input_array[y+1];
                input_array[y+1] = temp;
                sorted = 0;
            }
        }
        if (sorted)
            break;
    }
    return;
}

void Dashes()
{
    for (int i = 0; i < 40; i++)
    {
        if (i == 0)
        {
            printf("\n-");
        }
        else if (i + 1 == 40)
        {
            printf("-\n\n");
        }
        else
        {
            printf("-");
        }
    }
}

double calculateSum(int arr[], int size)
{
    int i;
    double sum = 0;
    
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum;
}

double calculateAverage(int arr[], int size)
{
    double sum = calculateSum(arr, size);
    double average = sum / size;
    
    return average;
}

double calculateMedian(int arr[], int size)
{
    BubbleSort(arr, size);

    // If the size of the array is even, return the average of the middle two elements
    // Otherwise, return the middle element
    
    if (size % 2 == 0) 
    {
        return (arr[(size/2) - 1] + arr[size/2]) / 2.0;
    } 
    else 
    {
        return arr[size/2];
    }

}

int calculateMode(int arr[], int size)
{
    int i, j, maxCount = 0, mode = 0;
    
    for (i = 0; i < size; i++) 
    {
        int count = 0;
        for (j = 0; j < size; j++) 
        {
            if (arr[j] == arr[i])
                count++;
        }
        
        if (count > maxCount) 
        {
            maxCount = count;
            mode = arr[i];
        }
    } 
    return mode;
}

double calculateStandardDeviation(int arr[], int size)
{
    double mean = calculateMedian(arr, size);
    double sumOfSquaredDifferences = 0;
    int i;
    
    for (i = 0; i < size; i++) {
        double difference = arr[i] - mean;
        sumOfSquaredDifferences += difference * difference;
    }
    
    double variance = sumOfSquaredDifferences / size;
    double standardDeviation = sqrt(variance);
    
    return standardDeviation;
}

int main()
{
    printf("Enter size of array : ");
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter member %d of the array : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    
    double sum = calculateSum(arr, size);
    double average = calculateAverage(arr, size);
    double median = calculateMedian(arr, size);
    int mode = calculateMode(arr, size);
    double standardDeviation = calculateStandardDeviation(arr, size);

    Dashes();

    printf("Sum\t\t\t:  %10.2f\n", sum);
    printf("Average\t\t\t:  %10.2f\n", average);
    printf("Median\t\t\t:  %10.2f\n", median);
    printf("Mode\t\t\t:  %10d\n", mode);
    printf("Standard Deviation\t:  %10.2f\n", standardDeviation);

    Dashes();
    
    return 0;
}
