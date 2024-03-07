#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, input;
    int target = 0;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        num[i] = input;
    }
    for (int i = 0; i < n; i++) {
        target = target ^ num[i];
    }
    printf("%d", target);

    return 0;
}