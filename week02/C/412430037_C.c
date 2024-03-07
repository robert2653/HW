#include <stdio.h>

int main() {
    int i, j, k, n;

    scanf("%d", &n);

    // 輸出樹冠部分
    for (i = 1; i <= n; i++) {
        // 輸出空格
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // 輸出星號
        for (k = 1; k <= 2*i - 1; k++) {
            if (k == 1 || k == 2*i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        // 換行
        printf("\n");
    }

    // 輸出樹幹部分
    for (i = 1; i <= n; i++) {
        // 輸出空格
        for (j = 1; j < n; j++) {
            printf(" ");
        }

        // 輸出星號
        printf("*\n");
    }

    return 0;
}
