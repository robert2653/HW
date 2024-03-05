#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ax, ay, bx, by, cx, cy;
    scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);
    if((bx - ax)*(cy - ay) - (cx - ax)*(by - ay) == 0)
    {
        printf("Touch");
    }else if((bx - ax)*(cy - ay) - (cx - ax)*(by - ay)>0)
    {
        printf("left");
    }else
    {
        printf("Right");
    }



    return 0;
}

