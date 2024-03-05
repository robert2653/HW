#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int x1,y1,x2,y2,x3,y3;
    scanf("%lld %lld %lld %lld %lld %lld",&x1,&y1,&x2,&y2,&x3,&y3);

    if((y2-y1)*(x3-x2)>(y3-y2)*(x2-x1))
    {
        printf("Right");
    }
    else if((y2-y1)*(x3-x2)<(y3-y2)*(x2-x1))
    {
        printf("Left");
    }
    else
    {
        printf("Touch");
    }
    return 0;
}
