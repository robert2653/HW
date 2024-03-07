#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int b = 0;

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        b ^= num;
    }

    if (b != 0) {
        printf("%d\n", b);
    } else {
        printf("0\n");
    }

    return 0;
}
