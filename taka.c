#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x <= 10000 && y < 4000)
    {
        int total = x - y;
        int r = total / 2;
        int m = r + y;
        printf("%d %d", m, r);
    }
    return 0;
}