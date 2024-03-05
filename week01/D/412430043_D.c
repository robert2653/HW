#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    long int ax, ay, bx, by, cx, cy, d1, d2, e1, e2;
    scanf("%ld %ld %ld %ld %ld %ld", &ax, &ay, &bx, &by, &cx, &cy);
    if (ax * by + bx * cy + cx * ay - ax * cy - bx * ay - cx * by == 0) {
        printf("touch");
    }
    else {
        d1 = bx - ax;
        d2 = by - ay;
        e1 = cx - ax;
        e2 = cy - ay;
        if (d1 * e2 - d2 * e1 > 0) {
            printf("Left");
        }
        else printf("Right");
    }
    return 0;
}