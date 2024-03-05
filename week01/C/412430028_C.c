#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ax, ay, bx, by, cx, cy;
    scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);
    if((bx-ax)/(by - ay) == (cx-ax)/(cy - ay))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
