#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 1001

int main()
{
    char str[MAX_SIZE];
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            printf("\n");
        else if(str[i] != '\n')
            printf("%c", str[i]);
    }
}