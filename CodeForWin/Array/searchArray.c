#include <stdio.h>

int main()
{
    int ara[10] = {10, 12, 20, 25, 13, 10, 9, 40, 60, 5};
    int k = 25, flag = 0;

    for (int i = 0; i < 10; i++)
    {
        if(ara[i] == k)
        {
            printf("found\nindex =  %d", i);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("not found\n");

    return 0;
}