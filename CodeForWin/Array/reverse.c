#include <stdio.h>

void reverse(int arr[])
{
    int start = 0, end = 4;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[5] = {10, 5, 16, 35, 500};
    reverse(arr);
    printf("Reverse = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}