#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ax, ay, bx, by, cx, cy;
    double AB1, AB2, AC1, AC2, area;
    scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);
    AB1 = bx - ax;
    AB2 = by - ay;
    AC1 = cx - ax;
    AC2 = cy - ay;
    area = (AC1 * AB2) - (AC2 * AB1);
    if(area == 0)
    {
        printf("Touch");
    }
    else if(area > 0)
    {
        printf("Right");
    }
    else if(area < 0)
    {
        printf("Left");
    }
    
    return 0;
}