#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < (i * 2) - 1; k++) {
            if (k == 0 || k == (i * 2) - 2) {
                printf("*");
            }
            else if (i == n) {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < n; j++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}