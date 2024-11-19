#include <stdio.h>

int main()
{
    int arr[100], size;

    printf("Enter array size: \n");
    scanf("%d", &size);

    printf("Enter array elements: \n");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("The sum of the elements is: \n");
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    printf("%d\n", sum);

    return 0;
}