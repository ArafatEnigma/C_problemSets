#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE], reversed[MAX_SIZE];
    int length;

    printf("Enter a string: ");
    gets(str); // Read the input string

    length = strlen(str); // Get the length of the string

    // Reverse the string
    for (int i = 0; i < length; i++)
    {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    printf("Reversed string: %s\n", reversed);

    return 0;
}
