#include <stdio.h>

int findOdd(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int n;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int odd = findOdd(arr, n);
    if (odd == 0) {
        printf("0\n");
    } else {
        printf("%d\n", odd);
    }
    return 0;
}

