#include <stdio.h>
int main()
{
    int d, q, r, div;
    scanf("%d %d %d", &d, &q, &r);
    if (d <= 4000 && q < 100 && r < 20)
    {
        q = d / div;
        r = d % div;
        printf("%d", div);
    }
    return 0;
}