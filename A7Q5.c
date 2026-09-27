//Write a C program to find the largest, second-largest, smallest, and second-smallest elements in an array without sorting it.
#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Need at least 2 elements to find largest/second-largest and smallest/second-smallest.\n");
        return 0;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (i = 0; i < n; i++) {
        // Update largest and second largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        // Update smallest and second smallest
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", secondLargest);
    printf("Smallest element: %d\n", smallest);
    printf("Second smallest element: %d\n", secondSmallest);

    return 0;
}