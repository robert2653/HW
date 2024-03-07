#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, k, spf, min, spf2;
    int life[199999];
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        min = 100;
        scanf("%d %d", &n, &k);
        for (int j = 0; j < n; j++) {
            scanf("%d", &life[j]);
        }
        if (k == 1) {
            printf("0\n");
            continue;
        }
        else if (n == 1) {
            if (life[0] % k == 0) {
                min = 0;
                printf("%d\n", min);
                continue;
            }
            else if (life[0] <= k) {
                min = k - life[0];
                printf("%d\n", min);
                continue;
            }
            else {
                min = k - (life[0] % k);
                printf("%d\n", min);
                continue;
            }

        }
        else if (k == 2 || k == 3 || k == 5) {
            for (int j = 0; j < n; j++) {
                if (life[j] == 1 && k - 1 < min) {
                    min = k - 1;
                }
                else if (life[j] % k == 0) {
                    min = 0;
                }
                else if (k - (life[j] % k) < min) {
                    min = k - (life[j] % k);
                }
            }
        }
        else {
            spf = 0;
            spf2 = 0;
            for (int j = 0; j < n; j++) {
                if (life[j] % k == 0) {
                    min = 0;
                    break;
                }
                else if ((life[j] + 1) % 4 == 0) {
                    min = 1;
                    continue;
                }
                else if (life[j] % 2 == 1) {
                    spf++;
                }
                else if (life[j] % 2 == 0) {
                    spf2++;
                }
                if (spf == 2 && spf2 == 0 && min > 1) {
                    min = 2;
                    continue;
                }
                if (spf2 == 2) {
                    min = 0;
                    break;
                }
                if (spf2 == 1 && spf >= 1 && min > 0) {
                    min = 1;
                    continue;
                }
            }
        }
        printf("%d\n", min);
    }
    return 0;
}