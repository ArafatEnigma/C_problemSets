#include <stdio.h>
#define MAX_SIZE 100


int main()
{
    char str[MAX_SIZE];
    int i;

    printf("Enter your text : ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A'); 
    }

    printf("Lowercase string : %s", str);
    return 0;
}