#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long ax,ay,bx,by,cx,cy,dxab,dyab,dxac,dyac,cross;
    scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);
    dxab = ax - bx;
    dyab = ay - by;
    dxac = ax - cx;
    dyac = ay - cy;
    cross = (dxab*dyac)-(dxac*dyab);
    if(cross < 0)
    {
     printf("Right");
    }
    else if(cross == 0)
    {
     printf("Touch");
    }
    else
    {
     printf("Left");
    }
    return 0;
}
