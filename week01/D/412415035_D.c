#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long ax, ay, bx, by, cx, cy;
    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);
    long long a,b,c,d,e;
    a=bx-ax;
    b=by-ay;
    c=cx-ax;
    d=cy-ay;
    e=a*d-b*c;
    if(e>0)
    {
        printf("Left");
    }
    else if(e<0)
    {
        printf("Right");
    }
    else
    {
        printf("Touch");
    }


    return 0;
}
