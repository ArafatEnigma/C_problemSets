#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 2, 5, 50, 5, 10, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++)
    {
        if (arr[i] == -1)
            continue;
        
        int count = 1;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }

        printf("Frequency of %d =  %d\n", arr[i], count);
    }

    return 0;
}