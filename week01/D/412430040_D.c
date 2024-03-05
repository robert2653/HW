#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax = 0, ay = 0, bx = 0, by = 0, cx = 0, cy = 0;
    double x;
    printf("");
    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);

    if (bx - ax != 0 && cx - ax != 0 && cx - bx != 0) {
        x = (ax * by - ay * bx) + (bx * cy - by * cx) + (cx * ay - cy * ax);
        if (x > 0) {
            printf("Left");
        }
        else if (x == 0) {
            printf("Touch");
        }
        else {
            printf("Right");
        }
    }
    return 0;
}
