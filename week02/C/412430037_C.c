#include <stdio.h>

int main() {
    int i, j, k, n;

    scanf("%d", &n);

    // ��X��a����
    for (i = 1; i <= n; i++) {
        // ��X�Ů�
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // ��X�P��
        for (k = 1; k <= 2*i - 1; k++) {
            if (k == 1 || k == 2*i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        // ����
        printf("\n");
    }

    // ��X��F����
    for (i = 1; i <= n; i++) {
        // ��X�Ů�
        for (j = 1; j < n; j++) {
            printf(" ");
        }

        // ��X�P��
        printf("*\n");
    }

    return 0;
}
