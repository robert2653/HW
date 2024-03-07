#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int nums[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int res = 0;
    for(i = 0; i < n; i++) {
        res ^= nums[i];
    }

    if(res == 0) {
        printf("0");
    } else {
        printf("%d", res);
    }

    return 0;
}
