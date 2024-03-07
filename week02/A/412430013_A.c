#include <stdio.h>

int Odd(int arr[], int amount) {
    int result = 0;
    for (int i = 0; i < amount; i++) {
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


    int result = Odd(arr, n);


    printf("%d\n", result);

    return 0;
}
