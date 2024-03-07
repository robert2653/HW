#include <stdio.h>

int main() {
    int n, i, num, result = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        result ^= num;
    }

    if(result==0)
        printf("0");
    else
        printf("%d", result);
    return 0;
}
