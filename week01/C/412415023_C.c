#include <stdio.h>
#include <stdlib.h>

int main() {
    long ax, ay, bx, by, cx, cy;
    scanf("%ld%ld%ld%ld%ld%ld", &ax, &ay, &bx, &by, &cx, &cy);

    double m1 = (double)(by - ay) / (bx - ax);
    double m2 = (double)(cy - by) / (cx - bx);
    double m3 = (double)(cy - ay) / (cx - ax);

    if (m1 == m2 && m2 == m3) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
