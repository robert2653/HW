#include <stdio.h>

int main() {
    int n, i, num, xor_result = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        xor_result ^= num;
    }

    if (xor_result != 0) {
        printf("%d\n", xor_result);
    } else {
        printf("0\n");
    }

    return 0;
}
