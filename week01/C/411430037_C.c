#include <stdio.h>

int main() {
    long x1, y1, x2, y2, x3, y3;

    scanf("%ld %ld %ld %ld %ld %ld", &x1, &y1, &x2, &y2, &x3, &y3);

    if ((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
