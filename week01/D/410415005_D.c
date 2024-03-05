#include <stdio.h>
#include <stdlib.h>

int main() {
    double ax, ay, bx, by, cx, cy, x1, y1, x2, y2, cro;
    scanf("%lf %lf %lf %lf %lf %lf",&ax, &ay, &bx, &by, &cx, &cy);
    x1=(bx-ax);
    y1=(by-ay);
    x2=(cx-ax);
    y2=(cy-ay);
    cro=(x1*y2)-(x2*y1);
    if (cro>0)
        printf("Left\n");
    else if (cro<0)
        printf("Right\n");
    else
        printf("Touch\n");

    return 0;
}
