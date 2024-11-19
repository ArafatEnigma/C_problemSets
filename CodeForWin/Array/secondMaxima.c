#include <stdio.h>

int first_maxima(int arr[100], int size);
int second_maxima(int arr[100], int size);

int main()
{
    int arr[100], size;
    printf("Enter array size: \n");
    scanf("%d", &size);

    printf("Enter array elements: \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    int sMax = second_maxima(arr, size);
    printf("Second Largest = %d\n", sMax);

    return 0;
}

int first_maxima(int arr[100], int size)
{
    int max = arr[0];

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int second_maxima(int arr[100], int size)
{
    int sMax = arr[0];
    int max = first_maxima(arr, size);

    for(int i = 0; i < size; i++)
    {
        if(arr[i] != max && arr[i] > sMax)
            sMax = arr[i];
    }
    return sMax;
}