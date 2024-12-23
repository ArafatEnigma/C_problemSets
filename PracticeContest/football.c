#include <stdio.h>
#include <string.h>

int danger(const char* input)
{
    int count = 1;

    for (int i = 1; input[i] != '\0'; i++)
    {
        if (input[i] == input[i - 1])
        {
            count++;
            if (count >= 7)
                return 1;
        } else {
            count = 1;
        }
    }
    return 0;
}

int main() {
    char input[100];
    scanf("%s", input);

    if (danger(input))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}