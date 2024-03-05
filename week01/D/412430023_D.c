#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int ax, ay, bx, by, cx, cy, abx, aby, acx, acy, projection;

    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);

    abx = bx - ax;
    aby = by - ay;
    acx = cx - ax;
    acy = cy - ay;


    long long int abx1 = -aby;
    long long int aby2 = abx;

    projection = acx * abx1 + acy * aby2;

    if (projection > 0) {
        printf("left");
    } else if (projection < 0) {
        printf("right");
    } else {
        printf("touch");
    }

    return 0;
}
