#include<stdio.h>

int main()
{
    long int x1,y1,x2,y2,x3,y3,v1x,v1y,v2x,v2y,det;
    scanf("%ld %ld %ld %ld %ld %ld",&x1,&y1,&x2,&y2,&x3,&y3);
    v1x=(long int)(x2-x1);
    v1y=(long int)(y2-y1);
    v2x=(long int)(x3-x1);
    v2y=(long int)(y3-y1);

    det=(long int)(v1x*v2y-v1y*v2x);

    if (det==0)
    {
        printf("Touch");
    }

    else if (det>0)
    {
        printf("Left");
    }
    else if (det<0)
    {
        printf("Right");
    }
}
