#include <stdio.h>

int main() {
    int i, j, k, rows;

    scanf("%d", &rows);


    for (i = 1; i <= rows; i++) {

        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (k = 1; k <= (2 * i - 1); k++) {

            if (k == 1 || k == (2 * i - 1) || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (i = 1; i <= rows; i++) {

        for (j = 1; j <= rows - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
