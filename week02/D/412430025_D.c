#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int max_remainder = 0;
        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);

            int remainder = num % k;
            if (remainder > max_remainder) {
                max_remainder = remainder;
            }
        }

        int min_operations = (max_remainder == 0) ? 0 : (k - max_remainder);
        printf("%d\n", min_operations);
    }

    return 0;
}
