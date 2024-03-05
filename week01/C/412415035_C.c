#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long ax, ay, bx, by, cx, cy;
    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);
    long long a, b, c, d;
    a=bx-ax;
    b=by-ay;
    c=cx-bx;
    d=cy-by;
    if(b*c==d*a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }


    return 0;
}
