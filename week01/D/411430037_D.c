#include <stdio.h>

int main() {
    long ax, ay, bx, by, cx, cy;

    if (scanf("%ld %ld %ld %ld %ld %ld", &ax, &ay, &bx, &by, &cx, &cy) != 6 ||
        ax >= (1L << 31) || ay >= (1L<< 31) ||
        bx >= (1L << 31) || by >= (1L << 31) ||
        cx >= (1L << 31) || cy >= (1L << 31)) {
        return 1;
    }

    if (ax == bx && ay == by) {
        return 1;
    }

    long crossProduct = (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);

    if (crossProduct > 0) {
        printf("Left\n");
    } else if (crossProduct < 0) {
        printf("Right\n");
    } else {
        printf("Touch\n");
    }

    return 0;
}
