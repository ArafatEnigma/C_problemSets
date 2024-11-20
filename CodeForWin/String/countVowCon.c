#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int vowel = 0, cons = 0;

    printf("Enter any string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowel++;
            else
                cons++;
        }
    }

    printf("Vowels = %d\n", vowel);
    printf("Consonants = %d\n", cons);

    return 0;
}
