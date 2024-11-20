#include <stdio.h>
#include <string.h>

void Reverse_Char(char input_name[], int first, int last)
{
    while (first < last)
    {
        char input = input_name[first];
        input_name[first] = input_name[last];
        input_name[last] = input;
        
        first++;
        last--;
    }
}

int main()
{
    char input_name[100] = "Islam Arafat Md.";
    int length = strlen(input_name);  
    Reverse_Char(input_name, 0, length - 1);
    int first_letter = 0;
    
    for (int i = 0; i <= length; i++)
    {
        if (input_name[i] == ' ' || input_name[i] == '\0')
        {
            Reverse_Char(input_name, first_letter, i - 1);
            first_letter = i + 1;
        }
    }

    printf("%s\n", input_name);
    
    return 0;
}