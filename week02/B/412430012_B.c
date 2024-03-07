#include <stdio.h>
#include <math.h>


int isPrime(int x) {
    if (x <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
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
