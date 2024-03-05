#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1,y1,x2,y2,x3,y3,m1,m2,m3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    m3=(y1-y3)/(x1-x3);
    if(m1==m2&&m2==m3&&m3==m1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
