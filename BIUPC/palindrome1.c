#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100001

int is_palindrome(char str[])
{
    int length = strlen(str);
    for (int left = 0, right = length - 1; left < right; left++, right--) {
        if (str[left] != str[right]) 
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[MAX_SIZE], filtered[MAX_SIZE];
    int filtered_length = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';


    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'v') {
            filtered[filtered_length++] = str[i];
        }
    }
    filtered[filtered_length] = '\0';

    if (is_palindrome(filtered))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
