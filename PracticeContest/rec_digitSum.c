#include <stdio.h>
#include <string.h>

long long sum_digits(const char *str)
{
    long long sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
        sum += str[i] - '0';
    return sum;
}

long long super_digit(long long num)
{
    if (num < 10) 
        return num;
    
    long long digitSum = 0;
    while (num > 0)
    {
        digitSum += num % 10;
        num /= 10;
    }
    return super_digit(digitSum);
}

int main()
{
    char n[100001];
    int k;
    scanf("%s %d", n, &k);

    long long digitSum = sum_digits(n);
    long long last_sum = digitSum * k;
    long long result = super_digit(last_sum);

    printf("%lld\n", result);
    return 0;
}