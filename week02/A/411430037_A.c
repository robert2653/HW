#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long result = 0;

    for (int i = 0; i < n; i++) {
        long long num;
        scanf("%lld", &num);
        result ^= num;
    }

    printf("%lld\n", result);

    return 0;
}
