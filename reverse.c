#include <stdio.h>
int main()
{
    int n, i, reserve = 0;
    scanf("%d", &n);
    for (i = n; i != 0; i = i / 10)
    {
        reserve = reserve * 10 + i % 10;
    }
    printf("%d", reserve);
    return 0;
}