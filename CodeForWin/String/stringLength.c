#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int custom_len(const char str[]);

int main()
{
    char str[MAX_SIZE];

    printf("Enter string: \n");
    fgets(str, MAX_SIZE, stdin);

    int length = custom_len(str);
    printf("Length of string: %d", length);
}

int custom_len(const char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
        count++;

    return count;
}

/*
Short Note: Macro Case-Sensitivity Issue and Solution

Problem:
Macros (#define) are case-sensitive. Using inconsistent casing (e.g., maxSize vs maxsize) causes errors like "expected a ']'".

Solution:
Ensure consistent casing. If #define maxSize 100, always use maxSize.

Best Practice:
Use UPPERCASE for macros (e.g., #define MAX_SIZE 100).
*/