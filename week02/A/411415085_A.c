#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int n;
    scanf("%lld", &n);

    long long int result = 0;

    for (long long int i = 0; i < n; ++i) {
        long long int num;
        scanf("%lld", &num);
        result ^= num;
    }

    printf("%lld\n", result);

    return 0;
}
