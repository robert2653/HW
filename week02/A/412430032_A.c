#include <stdio.h>

int main() {
    int n,result = 0,num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        result ^= num;
    }

    if (result != 0) {
        printf("%d\n", result);
    } else {
        printf("0\n");
    }

    return 0;
}
