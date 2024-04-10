#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int div = a / b;
    int mod = a % b;
    printf("%d %d", div, mod);
    return 0;
}