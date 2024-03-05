#include <stdio.h>
#include <stdlib.h>

long long ax,ay,bx,by,cx,cy;
long long dx,dy,ex,ey;


int main()
{
    scanf("%lld%lld%lld%lld%lld%lld",&ax,&ay,&bx,&by,&cx,&cy);
    dx=bx-ax;
    dy=by-ay;
    ex=cx-ax;
    ey=cy-ay;

    long long m=(dx*ey)-dy*ex;

    if(m>0){
        printf("Left");
    }
    else if(m<0){
        printf("Right");
    }
    else{
        printf("Touch");
    }

    return 0;
}
