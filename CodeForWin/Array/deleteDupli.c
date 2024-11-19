#include <stdio.h>
#include <string.h>

int main()
{
	int arr[] = {10, 20, 10, 1, 100, 10, 2, 1, 5, 10};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 0; i < size; i++) 
	{
		for(int j = i + 1; j < size;  j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j; k < size; k++){
                    arr[k] = arr[k + 1];
                    }
                size--;
                j--;    
            }
        }
	}
    
    printf("After removing all duplicate elements Elements of array are: \n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");    
    return 0;
}