#include <stdio.h>
#include <stdlib.h>

int is_prime(int x) {
    if (x <= 1) {
        return 0;
    }
    int i;
    for (i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t, i;
    scanf("%d", &t);

    int numbers[t];
    for (i = 0; i < t; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < t; i++) {
        if (is_prime(numbers[i])) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
