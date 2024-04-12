#include <stdio.h>
int main()
{
    int d, q, r, x, div;
    scanf("%d %d %d", &d, &q, &r);
    x = d - r;
    div = x / q;
    printf("%d\n", div);
    return 0;
}