#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main() {
    int n;

    scanf("%d", &n);

    // ��X�𸭳���
    for (int i = 0; i < n; i++) {
        // ��X�Ů�
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // ��X�P��
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i || i == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // ��X��F����
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
