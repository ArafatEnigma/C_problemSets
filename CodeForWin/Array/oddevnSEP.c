#include <stdio.h>

void seperator(int arr[])
{
    int even[10], odd[10], evenIndex = 0, oddIndex = 0;
    
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] % 2 == 0)
            even[evenIndex++] = arr[i];
        else
            odd[oddIndex++] = arr[i];
    }

    printf("Even array = ");

    for(int i = 0; i < evenIndex; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("Odd = ");
    for(int i = 0; i < oddIndex; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    seperator(arr);
    return 0;
}