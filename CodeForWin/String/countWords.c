#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int words = 0;

    printf("Enter any string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') 
        {
            if (str[i + 1] == ' ' || str[i + 1] == '\0' || str[i]=='\t')
                words++;
        }
    }

    printf("Words = %d\n", words);

    return 0;
}
