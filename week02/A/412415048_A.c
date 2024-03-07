#include <stdio.h>

int main() {
    int i, num;
    int result = 0;
    scanf("%d", &i);
    while(i--) {
        scanf("%d", &num);
        result ^= num;
    }
    printf("%d\n", result);
    return 0;
}
