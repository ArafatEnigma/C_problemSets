#include <stdio.h>
#include <math.h>

int is_power(int A, long long B)
{
    long long result = 1;
    for (int i = 0; i < A; i++)
    {
        result *= A;
        if (result > B)
            return 0;
    }
    return result == B;
}

int main()
{
    long long B;
    scanf("%lld", &B);

    for (int A = 1; A <= 63; A++)
    {
        if (is_power(A, B))
        {
            printf("%d\n", A);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}