#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main() {
    int n;

    scanf("%d", &n);

    // 輸出樹葉部分
    for (int i = 0; i < n; i++) {
        // 輸出空格
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // 輸出星號
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i || i == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // 輸出樹幹部分
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
