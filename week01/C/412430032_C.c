#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ax,ay,bx,by,cx,cy,slope1,slope2,dx1,dy1,dx2,dy2;
    scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);
    dx1 = ax - bx;//算ab的x的差
    dy1 = ay - by;//算ab的y的差
    dx2 = ax - cx;//算ac的x的差
    dy2 = ay - cy;//算ac的y的差
    slope1 = dy1 / dx1;//算ab的斜率
    slope2 = dy2 / dx2;//算ac的斜率
    if(slope1 == slope2)//檢測兩斜率是否相同
    {
     printf("Yes");
    }
    else
    {
     printf("No");
    }
    return 0;
}
