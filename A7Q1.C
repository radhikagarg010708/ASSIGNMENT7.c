//Write a C program to input n elements into a one-dimensional array. Display all the elements of the array and calculate and display their sum and average.
#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Array elements are: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    average = (float)sum / n;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", average);

    return 0;
}