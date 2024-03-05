#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long int x1, y1, x2, y2, xp, yp;
    scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &xp, &yp);

    long long int res = (y2 - y1) * xp + (x1 - x2) * yp + (x2 * y1 - x1 * y2);
    if(res > 0) {
        printf("Right");
    } else if(res < 0) {
        printf("Left");
    } else {
        printf("Touch");
    }
}