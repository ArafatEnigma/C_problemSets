#include <stdio.h>
#define MAX_SIZE 100


void toggleCase(char str[]);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("String before toggling case: %s\n", str);

    toggleCase(str);

    printf("String after toggling case: %s\n", str);

    return 0;
}


void toggleCase(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
        else if(str[i]>= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }

        i++;
    }
}