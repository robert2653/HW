#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a1, a2, b1, b2, c1, c2;
    double x1, y1, x2, y2;

    scanf("%lf%lf%lf%lf%lf%lf", &a1, &a2, &b1, &b2, &c1, &c2);

    x1 = b1 - a1;
    y1 = b2 - a2;
    x2 = c1 - a1;
    y2 = c2 - a2;

    if ((x1 * y2 - x2 * y1) > 0){
        printf("Left");
    }
    else if  ((x1 * y2 - x2 * y1) < 0){
        printf("Right");
    } else{
        printf("Touch");
    }

    return 0;
}
