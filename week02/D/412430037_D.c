#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }

        int product_mod_k = 1;
        for (int i = 0; i < n; ++i) {
            product_mod_k = (product_mod_k * a[i]) % k;
        }

        if (product_mod_k == 0) {
            printf("0\n");
        } else {
            printf("%d\n", k - product_mod_k);
        }
    }

    return 0;
}
