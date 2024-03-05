#include <stdio.h>

int main() {
    long long int ax, ay, bx, by, cx, cy;
    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);

    if (ax == bx || ax == cx || bx == cx) {
        printf("No");
    } else {
        double slope1 = (double)(ay - by) / (ax - bx);
        double slope2 = (double)(ay - cy) / (ax - cx);
        double slope3 = (double)(by - cy) / (bx - cx);

        if (slope1 == slope2 && slope1 == slope3) {
            printf("Yes");
        } else {
            printf("No");
        }
    }

    return 0;
}
