#include <stdio.h>

int fq[10] = {0, 0, 0 , 0 , 0 , 0 , 0};

int main() {
    int ara[] = {1, 2, 3, 2, 3, 1};

    // Calculating frequencies
    for (int i = 0; i < 6; i++)
    {
        fq[ara[i]]++;
    }

    // Printing frequencies
    for (int i = 0; i < 10; i++) {
        if (fq[i] > 0) { // Only print non-zero frequencies
            printf("%d -> %d\n", i, fq[i]);
        }
    }

    return 0;
}
