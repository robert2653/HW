#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long Ax, Ay, Bx, By, Cx, Cy,num ,ax ,ay ,bx ,by;
    scanf("%lld %lld %lld %lld %lld %lld",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
    ax= Bx-Ax;
    ay= By-Ay;
    bx= Cx-Ax;
    by= Cy-Ay;
    num=ax*by-ay*bx;
    if(num>0){
        printf("Left");
    }else if(num==0){
        printf("Touch");
    }else if(num<0){
        printf("Right");
    }
    return 0;
}
