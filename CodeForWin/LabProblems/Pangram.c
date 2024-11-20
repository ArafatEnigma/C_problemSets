#include <stdio.h>
#include <string.h>

char str[100], alphabet[26] = {0};

void lowercase(char str[], int size);
void isPresent(char str[], int size);

int main()
{
    int n;

    scanf("%d", &n);
    getchar();
    fgets(str, sizeof(str), stdin);
    lowercase(str, n);
    isPresent(str, n);

    int all_present = 1;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            all_present = 0;
            break;
        }
    }
    
    if (all_present) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

void lowercase(char str[], int size)
{
    for(int s = 0; s < size && str[s] != '\n'; s++)
    {
        if(str[s] >= 'A' && str[s] <= 'Z')
            str[s] = str[s] + ('a' - 'A');
    }
}

void isPresent(char str[], int size)
{
    for(int s = 0; s < size && str[s] != '\n'; s++)
    {
        int index = str[s] - 'a';
        alphabet[index] = 1;
    }
}
