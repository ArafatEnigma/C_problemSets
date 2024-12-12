#include <stdio.h>

int main()
{
    int N, X;
    scanf("%d %d", &N, &X);

    int scores[N];
    int totalScore = 0;

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &scores[i]);
        if(scores[i] <= X)
            totalScore += scores[i];
    }

    printf("%d\n", totalScore);

    return 0;
}