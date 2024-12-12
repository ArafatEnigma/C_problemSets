#include <stdio.h>
#include <math.h>

int main()
{
    int T, n, i, j, count;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &n);
        count = 0;
        
        for (i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            int sqrt_x = sqrt(x);
            
            if (sqrt_x * sqrt_x != x)
            {
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
