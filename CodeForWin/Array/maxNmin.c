#include <stdio.h>

int max(int arr[100], int size);
int min(int arr[100], int size);

int main()
{
    int arr[100], size;

    printf("Enter array size: \n");
    scanf("%d", &size);

    printf("Enter array elements: \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    int maxEle = max(arr, size);
    int minEle = min(arr, size);

    printf("Maximum = %d\nMinimum = %d\n", maxEle, minEle);

    return 0;
}

int max(int arr[100], int size)
{
    int max = arr[0];

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int min(int arr[100], int size)
{
    int min = arr[0];

    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

/* Issue arose: there was a logical error in the max and min functions.
Specifically, I was comparing each element of the array with arr[0] 
instead of max or min. This caused   the logic for finding the maximum or 
minimum to fail. */