#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    // 打印树的主体部分
    for (int i = 0; i < n - 1; i++) {
        // 打印空格，使树形左对齐显示
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // 打印星号，代表树叶
        printf("*");

        // 打印中间的空格
        for (int k = 0; k < 2 * i - 1; k++) {
            printf(" ");
        }

        // 如果不是第一行，再打印一个星号
        if (i > 0) {
            printf("*");
        }

        printf("\n");
    }

    // 打印树的底部
    for (int i = 0; i < 2 * n - 1; i++) {
        printf("*");
    }
    printf("\n");

    // 打印树干部分
    for (int i = 0; i < n ; i++) {
        // 打印空格，使树干左对齐显示
        for (int j = 0; j < n - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
