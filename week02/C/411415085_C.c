#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }


    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}

