#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax, ay, bx, by, cx, cy;

    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);

    long long int cross_product = (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);

    if (cross_product == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
