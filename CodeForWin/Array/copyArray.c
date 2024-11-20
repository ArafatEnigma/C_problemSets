#include <stdio.h>

int main()
{
    int arr[] = {10, 1, 95, 30, 45, 12, 60, 89, 40, -4};

    int size = sizeof(arr) / sizeof(arr[0]);

    int arr2[size];

    for(int j = 0; j < size; j++)
    {
        arr2[j] = arr[j];
    }

    printf("Array1: ");
    for(int j = 0; j < size; j++)
    {
        printf("%d ", arr[j]);
    }

    printf("\nArray2: ");
    for(int j = 0; j < size; j++)
    {
        printf("%d ", arr2[j]);
    }

    return 0;
}