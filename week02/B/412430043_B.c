#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int t, m, y;
    scanf("%d", &t);
    int target[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &target[i]);
    }
    for (int i = 0; i < t; i++) {
        y = 0;
        if (target[i] == 1) {
            printf("No\n");
            continue;
        }
        else if (target[i] == 2 || target[i] == 3) {
            printf("Yes\n");
            continue;
        }
        else {
            m = target[i] % 6;
            if (m != 1 && m != 5) {
                printf("No\n");
                continue;
            }
            for (int j = 2; j <= sqrt(target[i]) + 1; j++) {
                if (target[i] % j == 0) {
                    printf("No\n");
                    y++;
                    break;
                }
            }
        }
        if (y == 0) {
            printf("yes\n");
        }
    }
    return 0;
}