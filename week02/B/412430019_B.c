#include <stdio.h>

int prime(int x) {
    if (x <= 1) return 0;
    if (x <= 3) return 1;
    if (x % 2 == 0 || x % 3 == 0) return 0;
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }
    return 1;
}
int main() {
    int t;
    scanf("%d", &t);
    int arr[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < t; i++) {
        if (prime(arr[i])) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
