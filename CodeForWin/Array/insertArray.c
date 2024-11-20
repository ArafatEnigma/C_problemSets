#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int n = 3;
    int p = n - 1;

    int new_size = size + 1;
    int arr2[new_size];

    for (int i = 0; i < p; i++)
    {
        arr2[i] = arr[i];
    }

    arr2[p] = 25;

    for (int i = p; i < size; i++)
    {
        arr2[i + 1] = arr[i];
    }

    for (int i = 0; i < new_size; i++)
        printf("%d ", arr2[i]);

    return 0;
}