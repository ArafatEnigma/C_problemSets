#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1001

int main()
{
    char str[MAX_SIZE];
    int freq[10] = {0};
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
            freq[str[i] - '0']++;
    }

    for (int i = 0; i < 10; i++)
        printf("%d ", freq[i]);
}