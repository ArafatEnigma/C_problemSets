#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 5, 1, 5, 20, 2, 12, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int visited[size];
    for (int i = 0; i < size; i++)
    {
        visited[i] = 0;
    }
    

    for(int i = 0; i < size; i++)
    {
        if(visited[i] == 1)
            continue;

        int count = 1;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        if(count == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}