#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int result = 0;
    int num;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        result ^= num;
    }

    printf("%d", result);

    return 0;
}
