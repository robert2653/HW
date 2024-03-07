#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            if (i == n - 1 || j == 0 || j == 2 * i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
