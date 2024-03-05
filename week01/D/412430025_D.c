#include <stdio.h>
#include <stdlib.h>


long long int cross_product(long long int ax, long long int ay, long long int bx, long long int by, long long int cx, long long int cy) {
    return (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);
}

int main() {
    long long int ax, ay, bx, by, cx, cy;


    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);


    long long int cross = cross_product(ax, ay, bx, by, cx, cy);

    if (cross > 0) {
        printf("Left\n");
    } else if (cross < 0) {
        printf("Right\n");
    } else {
        printf("Touch\n");
    }

    return 0;
}
