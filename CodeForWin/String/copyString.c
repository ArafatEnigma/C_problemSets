#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void copyString(char cStr[], const char str[MAX_SIZE]);

int main()
{
    char origin[MAX_SIZE], copy[MAX_SIZE];

    printf("Enter string: \n");
    fgets(origin, MAX_SIZE, stdin);

    copyString(copy, origin);
    printf("Original string: %s\n Copied string: %s\n", origin, copy);
}

void copyString(char cStr[], const char str[MAX_SIZE])
{
    int i;
    for(i = 0; str[i] != '\n'; i++)
        cStr[i] = str[i];
    cStr[i] = '\0';
}

/*
adding const before cStr, The compiler will not allow you to assign
values to destination elements because const means they are read-only.
*/