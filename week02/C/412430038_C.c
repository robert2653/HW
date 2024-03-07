#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            printf(" ");        // 輸出空白，共 n-i 個
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            // 判斷是否在三角形的最左側或最右側，如果是則輸出米字
            if (k == 1 || k == 2 * i - 1 || i == n) {
                printf("*"); // 輸出米字，共 2*i-1 個
            } else {
                printf(" "); // 輸出空白
            }
        }
        printf("\n");
    }

    for (int u = 1; u <= n; u++){
        for (int t = 1; t <= n-1; t++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}


