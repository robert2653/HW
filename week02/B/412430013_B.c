#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t, x;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &x);
        printf("%s\n", isPrime(x) ? "yes" : "no");
    }
    return 0;
}
