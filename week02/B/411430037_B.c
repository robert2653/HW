#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }

    int sqrt_x = (int)sqrt(x);
    for (int i = 2; i <= sqrt_x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x;
        scanf("%d", &x);

        if (isPrime(x)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
