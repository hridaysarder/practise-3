#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int num1 = a % 10;
    long long int num2 = b % 10;
    long long int sum = num1 + num2;
    printf("%lld", sum);
    return 0;
}