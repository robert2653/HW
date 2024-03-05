#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long int a1, a2, b1, b2, c1, c2;
    scanf("%lld %lld %lld %lld %lld %lld", &a1, &a2, &b1, &b2, &c1, &c2);

    if(a1 * (b2 - c2) + b1 * (c2 - a2) + c1 * (a2 - b2) == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
}