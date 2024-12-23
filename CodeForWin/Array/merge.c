#include <stdio.h>

int main()
{
    int arr1[5] = {1, 4, 6, 9, 15};
    int arr2[4] = {2, 5, 8, 10}; 
    int merge[9];
    int i = 0, j = 0, k = 0;
    
    while(i < 5 && j < 4)
    {
        if(arr1[i] < arr2[j])
            merge[k++] = arr1[i++];
        else
            merge[k++] = arr2[j++];
    }

    while(i < 5)
        merge[k++] = arr1[i++];
    while(j < 4)
        merge[k++] = arr2[j++];

    for(int i = 0; i < 9; i++)
        printf("%d ", merge[i]);

    return 0;
}