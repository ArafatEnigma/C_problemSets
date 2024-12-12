#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        char log[501];

        scanf("%d", &n);
        scanf("%s", log);

        int solved = 0;
        int timeSpent[26] = {0};

        for (int i = 0; i < n; i++) {
            int problem = log[i] - 'A';
            timeSpent[problem]++;
            if (timeSpent[problem] == problem + 1) {
                solved++;
            }
        }

        printf("%d\n", solved);
    }

    return 0;
}