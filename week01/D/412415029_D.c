#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int x1,y1,x2,y2,x3,y3,Lx,Ly,Vx,Vy;
    scanf("%ld %ld %ld %ld %ld %ld",&x1,&y1,&x2,&y2,&x3,&y3);
    Lx=x2-x1;
    Ly=y2-y1;
    Vx=x3-x1;
    Vy=y3-y1;
    if((Lx*Vy)-(Ly*Vx)<0)
    {
    printf("Right");
    }
    if((Lx*Vy)-(Ly*Vx)>0)
    {
    printf("Left");
    }
    if((Lx*Vy)-(Ly*Vx)==0)
    {
    printf("Touch");
    }
    return 0;
}
