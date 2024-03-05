#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int ax, ay, bx, by, cx, cy;


    scanf(" %lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);

    if (ax == bx && ay == by) {
        printf("no\n");
        return 1;
    }


    long long int x = (ax - bx) * (cy - by) - (ay - by) * (cx - bx);

    if (x == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
