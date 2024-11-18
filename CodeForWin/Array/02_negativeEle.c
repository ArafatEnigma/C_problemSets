#include <stdio.h>

int main()
{
    int arr[100], size;
    printf("Enter Array Size: \n");
    scanf("%d", &size);
    printf("\n");

    printf("Enter Array Elements: \n");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("\n");

    printf("The Negative Elements From The Array Are:\n");
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}