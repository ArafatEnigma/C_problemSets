#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int compare(char str1[], char str2[]);

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    gets(str1);
    gets(str2);

    int noMatch = compare(str1, str2);

    if(noMatch == 0)
    {
        printf("Both strings are equal.");
    }
    else if(noMatch < 0)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}

int compare(char str1[], char str2[])
{
    int i;
    for(i = 0; str1[i] == str2[i]; i++)
    {
        if(str1[i] == '\0' && str2[i] == '\0')
            break;
    }
    return str1[i] - str2[i];
}