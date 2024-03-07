#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0; // Not a prime number
    }

    int sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

int main() {
    int t;

    // Input the number of test cases
    scanf("%d", &t);

    // Input the array elements and check primality
    for (int i = 0; i < t; i++) {
        int num;
        scanf("%d", &num);

        if (is_prime(num)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
