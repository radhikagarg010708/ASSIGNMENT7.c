//Write a C program to search for a given element in an array. Display all its positions and total number of occurrences. If it is not found, display an appropriate message.

#include <stdio.h>

int main()
{
    int n, i, arr[100];
    int search, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    printf("Positions of %d: ", search);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            printf("%d ", i + 1);
            count++;
        }
    }

    if(count == 0)
    {
        printf("\nElement not found.");
    }
    else
    {
        printf("\nTotal number of occurrences = %d", count);
    }

    return 0;
}