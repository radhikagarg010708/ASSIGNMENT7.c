//Write a C program to input n elements into an array. Input a new element and the position where it should be inserted. Insert the element at the given position by shifting the existing elements to the right. Display the updated array. If the entered position is invalid, display an appropriate message.
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, newElement;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &newElement);

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
        return 0;
    }

    // Shift elements to the right to make space
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the given position
    arr[pos - 1] = newElement;
    n++; // increase the count of elements

    // Display the updated array
    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}