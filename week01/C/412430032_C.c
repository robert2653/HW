#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ax,ay,bx,by,cx,cy,slope1,slope2,dx1,dy1,dx2,dy2;
    scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);
    dx1 = ax - bx;//��ab��x���t
    dy1 = ay - by;//��ab��y���t
    dx2 = ax - cx;//��ac��x���t
    dy2 = ay - cy;//��ac��y���t
    slope1 = dy1 / dx1;//��ab���ײv
    slope2 = dy2 / dx2;//��ac���ײv
    if(slope1 == slope2)//�˴���ײv�O�_�ۦP
    {
     printf("Yes");
    }
    else
    {
     printf("No");
    }
    return 0;
}
