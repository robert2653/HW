#include <stdio.h>
#include <stdlib.h>

int main()
{

    long long m,mx,my,nx,ny,ax,ay,bx,by,cx,cy;
    scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);
    mx=cx-ax;
    my=cy-ay;
    nx=bx-ax;
    ny=by-ay;
    m=mx*ny-my*nx;
    if(m==0){
        printf("Touch");
    }
    else if(m<0){
        printf("Left");
    }
    else if(m>0){
        printf("Right");
    }
    return 0;
}
