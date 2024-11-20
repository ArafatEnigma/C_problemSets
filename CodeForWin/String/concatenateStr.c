#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    gets(str1);
    gets(str2);

    int i, j;
    for (i = strlen(str1), j = 0; str2[j] != '\0'; i++, j++)
        str1[i] = str2[j];
    str1[i] = '\0';

    printf("Concatenated string = %s", str1);

    return 0;
}