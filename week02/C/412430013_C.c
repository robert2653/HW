#include <stdio.h>

void printSpaces(int num) {
    for (int i = 0; i < num; i++) {
        printf(" ");
    }
}

void printStars(int num) {
    for (int i = 0; i < num; i++) {
        printf("*");
    }
}

int main() {
    int n;

    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        printSpaces(n - i);
        if (i < n) {
            printStars(1);
            if (i > 1) {
                printSpaces(2 * (i - 1) - 1);
                printStars(1);
            }
        } else {
            printStars(2 * i - 1);
        }
        printf("\n");
    }


    for (int i = 0; i < n; i++) {
        printSpaces(n - 1);
        printf("*\n");
    }

    return 0;
}
