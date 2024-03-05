#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax , ay , bx , by , cx , cy;
    float x1,x2,x3;
    scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);

    x1 = (float)(ay-by)/(ax-bx);
    x2 = (float)(by-cy)/(bx-cx);
    x3 = (float)(cy-ay)/(cx-ax);
    if((ax-bx)==0)
    {
        printf("No");
        return 0;
    }
    if(x1==x2 && x2==x3 && x3==x1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
