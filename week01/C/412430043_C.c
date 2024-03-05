#include <stdio.h>
#include <stdlib.h>

int main() {
    long int ax, ay, bx, by, cx, cy;
    scanf("%ld %ld %ld %ld %ld %ld", &ax, &ay, &bx, &by, &cx, &cy);
    if (ax * by + bx * cy + cx * ay - ax * cy - bx * ay - cx * by == 0) {
        printf("Yes");
    }
    else printf("No");
    return 0;
}
