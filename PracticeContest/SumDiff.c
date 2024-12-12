#include <stdio.h>

int main()
{
    int n1, n2, int_sum, int_diff;
    float f1, f2, float_sum, float_diff;

    scanf("%d %d", &n1, &n2);
    scanf("%f %f", &f1, &f2);

    int_sum = n1 + n2;
    int_diff = n1 - n2;

    float_sum = f1 + f2;
    float_diff = f1 - f2;

    printf("%d %d\n", int_sum, int_diff);              // Integer results
    printf("%.1f %.1f\n", float_sum, float_diff);      // Float results (rounded to 1 decimal place)

    return 0;
}
