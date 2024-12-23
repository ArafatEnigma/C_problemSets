#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 200000
#define MAX_TESTS 100

// Function to check if a character is a vowel
int is_vowel(char ch) {
    return ch == 'a' || ch == 'e';
}

// Function to check if a character is a consonant
int is_consonant(char ch) {
    return ch == 'b' || ch == 'c' || ch == 'd';
}

// Function to process a single word and split it into syllables
void split_into_syllables(char *word, int length) {
    int i = 0;
    while (i < length) {
        if (i + 1 < length && is_consonant(word[i]) && is_vowel(word[i + 1])) {
            // CV pattern
            printf("%c%c", word[i], word[i + 1]);
            i += 2;
        } else if (i + 2 < length && is_consonant(word[i]) && is_vowel(word[i + 1]) && is_consonant(word[i + 2])) {
            // CVC pattern
            printf("%c%c%c", word[i], word[i + 1], word[i + 2]);
            i += 3;
        } else {
            // This should not occur given the problem guarantees valid input
            fprintf(stderr, "Unexpected invalid syllable.");
            return;
        }

        // Print a dot if there are more syllables to process
        if (i < length) {
            printf(".");
        }
    }
    printf("\n");
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    // Input constraints
    char word[MAX_LENGTH + 1];

    for (int test = 0; test < t; test++) {
        int n; // Length of the word
        scanf("%d", &n);
        scanf("%s", word);

        // Process the word and output the result
        split_into_syllables(word, n);
    }

    return 0;
}
