#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    int second_max = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max) {
            if (second_max == -1 || arr[i] > second_max) {
                second_max = arr[i];
            }
        }
    }

    printf("%d\n", second_max);
    return 0;
}