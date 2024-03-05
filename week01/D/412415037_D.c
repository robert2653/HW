#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ax, ay, bx, by, cx, cy;
    scanf("%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &cx, &cy);
    double vx = bx - ax;
    double vy = by - ay;
    double rx = cx - ax;
    double ry = cy - ay;

    double sum = vx*ry - vy*rx;
    if(sum > 0){
        printf("Left");
    }else if(sum < 0){
        printf("Right");
    }else{
        printf("Touch");
    }

    return 0;
}
